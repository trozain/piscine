/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:54:39 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 22:17:29 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert_chunk.h"
#include "convert2.h"
#include "convert.h"
#include "utils.h"
#include "ft_string.h"
#include "h_map.h"
#include <stdlib.h>

int	get_s(size_t nb, t_hmap *dict, char **s)
{
	char	*s_str;

	if (nb)
	{
		s_str = ctostr('1', 3 * nb + 1);
		*s = get_value(dict, s_str);
		free(s_str);
		if (!*s)
			return (-1);
	}
	else
		*s = NULL;
	return (0);
}

int	get_h_t(char *chunk, t_hmap *dict, char **h, char **t)
{
	*h = convert_hundred(chunk[0], dict);
	if (!*h)
		return (-1);
	if (chunk[0] != '0' && chunk[1] == '0' && chunk[2] == '0')
		*t = ctostr('\0', 0);
	else
		*t = convert_ten(chunk + 1, dict);
	if (!*t)
	{
		free(*h);
		return (-1);
	}
	return (0);
}

char	*convert_chunk(char *chunk, size_t nb, t_hmap *dict)
{
	char	*h;
	char	*t;
	char	*s;
	char	*word;

	if (chunk[0] == '0' && chunk[1] == '0' && chunk[2] == '0')
		return (ctostr('\0', 0));
	if (get_h_t(chunk, dict, &h, &t))
		return (NULL);
	if (get_s(nb, dict, &s))
	{
		free_memory_of(h, t, NULL, NULL);
		return (NULL);
	}
	word = malloc(sizeof(char) * (ft_strlen(h) + ft_strlen(t)
				+ ft_strlen(s) + 3));
	init_buffer_to_zero(word, (ft_strlen(h) + ft_strlen(t) + ft_strlen(s) + 3));
	ft_strcat(ft_strcat(ft_strcat(ft_strcat(ft_strcat(word, h), " "),
				t), " "), s);
	free_memory_of(s, h, t, NULL);
	return (word);
}
