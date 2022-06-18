/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:23:15 by trozain           #+#    #+#             */
/*   Updated: 2021/09/20 22:48:00 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			is_printable++;
		}
		i++;
	}
	if (is_printable != i)
		return (0);
	else
		return (1);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_str_is_printable(argv[1]));
	(void)	argc;
}*/
