/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:38:59 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 18:06:53 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		++i;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}
//  Bonjour a toi qui va m'evaluer.
// Bonne chance"
// *
int main(int argc, char *argv[])
{
	printf("fonction maison: %d\n", ft_strcmp(argv[1], argv[2]));
	printf("strcmp: %d\n", strcmp(argv[1], argv[2]));
	(void)	argc;
}
