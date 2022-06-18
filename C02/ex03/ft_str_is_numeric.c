/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:22:33 by trozain           #+#    #+#             */
/*   Updated: 2021/09/20 22:51:40 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			is_numeric++;
		}
		i++;
	}
	if (is_numeric != i)
		return (0);
	else
		return (1);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_str_is_numeric(argv[1]));
	(void)	argc;
}
*/
