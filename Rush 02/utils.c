/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 02:59:18 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 17:56:53 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "utils.h"
#include "utils2.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == '\t' || c == ' ');
}

char	*skip_spaces(char *str)
{
	while (*str && ft_isspace(*str))
		++str;
	return (str);
}

int	is_empty_line(char *line)
{
	line = skip_spaces(line);
	return (ft_strlen(line) == 0 || is_new_line(line[0]));
}

void	init_buffer_to_zero(char *buffer, unsigned int size)
{
	size_t	i;

	i = 0;
	while (i != size)
	{
		buffer[i] = '\0';
		i++;
	}
}

void	free_memory_of(char *buff1, char *buff2, char *buff3, char *buff4)
{
	if (buff1)
		free(buff1);
	if (buff2)
		free(buff2);
	if (buff3)
		free(buff3);
	if (buff4)
		free(buff4);
}
