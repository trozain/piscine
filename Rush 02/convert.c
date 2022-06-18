/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_world.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:24:36 by trozain           #+#    #+#             */
/*   Updated: 2021/09/19 22:10:08 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert_chunk.h"
#include "convert.h"
#include "convert2.h"
#include "ft_string.h"
#include "h_map.h"
#include "utils.h"
#include "utils2.h"
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char	*convert_unit(char c, t_hmap *dict)
{
	char	*u;
	char	*c_str;

	c_str = ctostr(c, 1);
	if (!c_str)
		return (NULL);
	u = get_value(dict, c_str);
	free(c_str);
	return (u);
}

char	*convert_ten(char *str, t_hmap *dict)
{
	char	*t;
	char	*u;
	char	*word;
	char	*t_str;

	if (str[0] == '0')
		return (convert_unit(str[1], dict));
	else if (str[0] == '1')
		return (get_value(dict, str));
	if (str[0] != '0' && str[1] == '0')
		u = ctostr('\0', 0);
	else
		u = convert_unit(str[1], dict);
	t_str = ctostr(str[0], 2);
	t = get_value(dict, t_str);
	if (!t || !u)
	{
		free_memory_of(u, NULL, NULL, NULL);
		return (NULL);
	}
	word = malloc(sizeof(char) * (ft_strlen(t) + ft_strlen(u) + 2));
	init_buffer_to_zero(word, (ft_strlen(t) + ft_strlen(u) + 2));
	ft_strcat(ft_strcat(ft_strcat(word, t), " "), u);
	free_memory_of(t_str, u, t, NULL);
	return (word);
}

char	*convert_hundred(char c, t_hmap *dict)
{
	char	*h;
	char	*u;
	char	*word;
	char	*c_str;

	word = NULL;
	if (c == '0')
		return (manage_zero_character(word));
	c_str = ctostr(c, 1);
	if (!c_str)
		return (NULL);
	h = get_value(dict, "100");
	u = get_value(dict, c_str);
	if (!u || !h)
	{
		free_memory_of(h, NULL, NULL, NULL);
		return (NULL);
	}
	word = malloc(sizeof(char) * (ft_strlen(h) + ft_strlen(u) + 2));
	init_buffer_to_zero(word, (ft_strlen(h) + ft_strlen(u) + 2));
	if (!word)
		return (NULL);
	ft_strcat(ft_strcat(ft_strcat(word, u), " "), h);
	free_memory_of(u, h, c_str, NULL);
	return (word);
}
/*
char	*convert_chunk(char *chunk, size_t nb, t_hmap *dict)
{
	char	*h;
	char	*t;
	char	*s;
	char	*s_str;
	char	*word;

	if (chunk[0] == '0' && chunk[1] == '0' && chunk[2] == '0')
		return (ctostr('\0', 0));
	h = convert_hundred(chunk[0], dict);
	if (!h)
		return (NULL);
	if (chunk[0] != '0' && chunk[1] == '0' && chunk[2] == '0')
		t = ctostr('\0', 0);
	else
		t = convert_ten(chunk + 1, dict);
	if (!t)
	{
		free(h);
		return (NULL);
	}
	if (nb)
	{
		s_str = ctostr('1', 3 * nb + 1);
		s = get_value(dict, s_str);
		free(s_str);
		if (!s)
		{
			free_memory_of(h, t, NULL, NULL);
			return (NULL);
		}
	}
	else
		s = NULL;
	word = malloc(sizeof(char) * (ft_strlen(h) + ft_strlen(t)
				+ ft_strlen(s) + 3));
	init_buffer_to_zero(word, (ft_strlen(h) + ft_strlen(t) + ft_strlen(s) + 3));
	ft_strcat(ft_strcat(ft_strcat(ft_strcat(ft_strcat(word, h), " "),
				t), " "), s);
	free_memory_of(s, h, t, NULL);
	return (word);
}*/

int	convert_to_word(char *nb, t_hmap *dict)
{
	size_t	nb_chunk;
	int		first;
	char	*chunk_str;

	if (ft_strcmp(nb, "0") == 0)
	{
		chunk_str = get_value(dict, "0");
		write(1, chunk_str, ft_strlen(chunk_str));
		free(chunk_str);
		return (1);
	}
	first = 1;
	nb_chunk = ft_strlen(nb) / 3;
	if (ft_strlen(nb) % 3)
		++nb_chunk;
	if (write_chunk(nb, dict, nb_chunk, &first))
		return (0);
	return (1);
}
