/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:27:57 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 22:08:37 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert2.h"
#include "utils.h"
#include "utils2.h"
#include "h_map.h"
#include "ft_string.h"
#include "convert_chunk.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

char	*ctostr(char c, size_t s)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (s + 1));
	init_buffer_to_zero(str, (s + 1));
	if (!str)
		return (NULL);
	if (s > 0)
		str[0] = c;
	i = 1;
	while (i < s)
		str[i++] = '0';
	str[i] = '\0';
	return (str);
}

void	fill_chunk_zeros(char *chunk, char *nb, size_t mod)
{
	size_t	i;

	i = 0;
	while (i < 3 - mod)
		chunk[i++] = '0';
	while (i < 3)
	{
		chunk[i] = nb[i - 3 + mod];
		++i;
	}
}

char	*get_chunk(char *nb, size_t mod, size_t nb_chunk, size_t chunk_nb)
{
	char	*chunk;
	size_t	i;

	chunk = malloc(sizeof(char) * 4);
	if (!chunk)
		return (NULL);
	chunk[3] = 0;
	i = 0;
	if (mod && chunk_nb + 1 == nb_chunk)
	{
		fill_chunk_zeros(chunk, nb, mod);
		return (chunk);
	}
	if (mod)
		--nb_chunk;
	while (i < 3)
	{
		chunk[i] = nb[(nb_chunk - chunk_nb - 1) * 3 + mod + i];
		i++;
	}
	return (chunk);
}

char	*manage_zero_character(char *word)
{
	word = malloc(sizeof(char));
	word[0] = '\0';
	return (word);
}

int	write_chunk(char *nb, t_hmap *dict, size_t nb_chunk, int *first)
{
	char	*chunk;
	char	*chunk_str;
	size_t	i;

	i = nb_chunk;
	while (i > 0)
	{
		chunk = get_chunk(nb, ft_strlen(nb) % 3, nb_chunk, i - 1);
		if (!chunk)
			return (-1);
		chunk_str = convert_chunk(chunk, (i--) - 1, dict);
		free(chunk);
		if (!chunk_str)
			return (-1);
		trim_spaces(chunk_str);
		if (*chunk_str)
		{
			if (!*first)
				write(1, " ", 1);
			write(1, chunk_str, ft_strlen(chunk_str));
			*first = 0;
		}
		free(chunk_str);
	}
	return (0);
}
