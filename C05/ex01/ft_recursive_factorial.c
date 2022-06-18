/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recusive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:02:19 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 18:08:29 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1)*;
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
}*/
