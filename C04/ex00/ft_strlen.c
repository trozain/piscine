/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:18:48 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 17:43:15 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	printf("fonction maison: %d\n", ft_strlen(argv[1]));
	printf("strlen: %lu\n", strlen(argv[1]));
	(void) argc;
}*/
