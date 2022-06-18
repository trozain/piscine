/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:21:11 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 23:24:05 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"
#include "dict.h"
#include "parsing.h"
#include "utils.h"
#include "ft_string.h"
#include <fcntl.h>
#include <unistd.h>
#define DIC_NAME "numbers.dict"

int	print_error(void)
{
	write(1, "Error\n", 6);
	return (-1);
}

int	print_dict_error(void)
{
	write(1, "Dict Error\n", 12);
	return (-1);
}

int	get_nb(char *str, char **nb)
{
	int	i;

	*nb = skip_spaces(str);
	if (!is_number_correct(*nb))
		return (print_error());
	if (ft_strlen(*nb) == 0)
		return (print_error());
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	*nb = "0";
	return (0);
}

int	launch(char *nb, int dict)
{
	t_hmap	*map;

	map = init_hmap(MAP_SIZE);
	if (!map)
		return (print_error());
	if (parse_dict(dict, map))
	{
		free_map(&map);
		return (print_dict_error());
	}
	close(dict);
	if (!convert_to_word(nb, map))
	{
		free_map(&map);
		return (print_error());
	}
	write(1, "\n", 1);
	free_map(&map);
	return (0);
}

int	main(int argc, char **argv)
{
	int		dict;
	char	*nb;

	dict = -1;
	if (argc < 2 || argc > 3)
		return (print_error());
	if (argc == 3)
	{
		if (get_nb(argv[2], &nb))
			return (-1);
		dict = open(argv[1], O_RDONLY);
	}
	else if (argc == 2)
	{
		if (get_nb(argv[1], &nb))
			return (-1);
		dict = open(DIC_NAME, O_RDONLY);
	}
	if (dict < 0)
		return (print_error());
	if (launch(nb, dict))
		return (-1);
	return (0);
}
