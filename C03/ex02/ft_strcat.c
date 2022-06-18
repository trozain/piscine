/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:42:18 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 15:32:29 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// Ohoh! je vois que nous aons un amateur de problemes.
// est-ce que mes exercice sont a la hauteurs?
/*
int main(int argc, char *argv[])
{
	char dest[50] = "Pet";

	char dest2[50] = "Pet";
	
	printf("fonction: %s\n", ft_strcat(dest, argv[1]));
	printf("strcat: %s\n", strcat(dest2, argv[2]));
	(void)	argc;
}*/
