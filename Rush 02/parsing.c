/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:05:55 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 21:14:18 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "utils2.h"
#include "h_map.h"
#include "ft_string.h"
#include <stdlib.h>

int	is_number_correct(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	*parse_key(char **line)
{
	char	*key;
	size_t	len;
	char	*start;

	len = 0;
	start = *line;
	while (**line >= '0' && *(*line)++ <= '9')
		++len;
	--*line;
	while (**line && **line != ':')
		++*line;
	if (**line != ':')
		return (NULL);
	++*line;
	if (len > 0)
	{
		key = malloc(sizeof(*key) * (len + 1));
		ft_strncpy(key, start, len);
		key[len] = 0;
		return (key);
	}
	key = malloc(sizeof(*key) * 2);
	if (key)
		ft_strncpy(key, "0", 2);
	return (key);
}

char	*parse_value(char *line)
{
	char	*value;

	trim_spaces(line);
	value = malloc(sizeof(*value) * (ft_strlen(line) + 1));
	if (!value)
		return (NULL);
	ft_strncpy(value, line, ft_strlen(line) + 1);
	return (value);
}

int	parse_line(char *line, t_hmap *map)
{
	char	*key;
	char	*value;

	line = skip_spaces(line);
	key = parse_key(&line);
	line = skip_spaces(line);
	value = parse_value(line);
	if (!key || !value)
		return (-1);
	if (add_element(map, key, value))
		return (-1);
	return (0);
}
