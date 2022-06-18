/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 02:15:04 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 18:09:11 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	while (i * i < (unsigned int)nb)
		++i;
	if ((unsigned int)nb != i * i || nb < 0)
		return (0);
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	printf("= %d\n", ft_sqrt(atoi(argv[1])));
	(void) argc;
	return(0);
}*/
