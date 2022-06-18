/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:13:20 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 01:46:16 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
	{
		i = 1;
		return (i);
	}
	while (i <= nb)
	{	
		fact = fact * i;
		i++;
	}
	return (fact);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}*/
