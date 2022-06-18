/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurcive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:18:13 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 01:40:37 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("puissance = %d\n", ft_recursive_power(atoi(argv[1]), (atoi(argv[2]))));
	(void) argc;
	return(0);
}*/
