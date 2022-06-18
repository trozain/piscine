/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:39:41 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 14:20:26 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		i *= nb;
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("puissance = %d\n", ft_iterative_power(atoi(argv[1]), (atoi(argv[2]))));
	(void) argc;
	return(0);
}*/
