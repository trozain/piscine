/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:50:59 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 15:32:19 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] && s2[i])
	{
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// l'aventure n'est pas encore terminer au contraire 
// elle ne fait que commencer!
/*
int	main(int argc, char *argv[])
{
	printf("fonction: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("strncmp: %d\n", strncmp(argv[4], argv[5], atoi(argv[6])));
	(void)	argc;
}*/
