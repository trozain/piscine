/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 02:55:21 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 20:51:35 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "ft_string.h"
#include "h_map.h"
#include "parsing.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_line(int dict, char *buffer)
{
	char	character;
	size_t	nb_chars;
	int		reading;

	nb_chars = 0;
	reading = 1;
	init_buffer_to_zero(buffer, BUFFER_SIZE);
	while (reading > 0)
	{
		reading = read(dict, &character, 1);
		if (reading > 0)
		{
			if (character == '\n' || character == '\r')
				reading = 0;
			else
				buffer[nb_chars++] = character;
		}
		else if (reading == 0 && ft_strlen(buffer) == 0)
			buffer[0] = EOF;
	}
	if (reading < 0)
		return (NULL);
	return (buffer);
}

int	parse_dict(int dict, t_hmap *map)
{
	char	*buf;
	char	*line;

	buf = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buf)
		return (-1);
	line = get_line(dict, buf);
	while (line[0] != EOF)
	{
		if (!is_empty_line(line))
		{
			if (parse_line(line, map))
			{
				free(buf);
				return (-1);
			}
		}
		buf[0] = 0;
		line = get_line(dict, buf);
	}
	free(buf);
	return (0);
}
