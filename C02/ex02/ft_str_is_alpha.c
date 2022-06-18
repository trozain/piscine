/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:22:21 by trozain           #+#    #+#             */
/*   Updated: 2021/10/27 14:37:23 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			++i;
			continue ;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_str_is_alpha(argv[1]));
	(void)	argc;
}*/
