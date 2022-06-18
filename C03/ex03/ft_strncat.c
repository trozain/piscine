/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:36:00 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 15:32:43 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// AHAHHAHAHAH tu es arriver juqu'ici?
// Bien!
// Tu as affaire a un genie! un genie wish.
// mais un genie quand meme.
/*
int main()
{
        char dest[50] = "Petit ";

        char dest2[50] = "Petit ";

		char dest3[50] = "Poney";

		char dest4[50] = "Poney";

		int a = 1;

		int b = 1;

        printf("fonction: %s\n", ft_strncat(dest, dest3, a));
        printf("strncat: %s\n", strncat(dest2, dest4, b));
        
}*/
