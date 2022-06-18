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

#include "utils2.h"
#include "utils.h"
#include <stdlib.h>

int	is_new_line(char c)
{
	return (c == '\n' || c == '\r');
}

char	*trim_spaces(char *str)
{
	char	*write;
	char	*start;

	if (str == NULL)
		return (NULL);
	start = str;
	write = str;
	str = skip_spaces(str);
	if (*str == '\0')
	{
		*start = '\0';
		return (start);
	}
	while (*str)
	{
		while (*str && !ft_isspace(*str))
			*(write++) = *(str++);
		if (*write)
			*write = ' ';
		++write;
		str = skip_spaces(str);
	}
	--write;
	*write = '\0';
	return (start);
}
