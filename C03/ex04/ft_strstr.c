/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:41:40 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 15:32:49 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*jsp(char *s1, char *s2, int i, int j);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	return (jsp(str, to_find, 0, 0));
}

char	*jsp(char *s1, char *s2, int i, int j)
{
	while (s2[j] && s1[i])
	{
		if (s1[i] == s2[j])
		{
			jsp(s1, s2, ++i, ++j);
		}
		else
		{
			++i;
			j = 0;
		}
	}
	if (j == 0 || (!s1[i] && s2[j]))
		return (NULL);
	return (&s1[i - j]);
}
// Enfin arriver au dernier exercice que j ai realiser!
// Peut - etre est - il juste, en tout cas d apres la moulinette oui,
// venere mon genie (wish), et bonne journee a toi <3
/*
int main(int argc, char *argv[])
{	
	printf("fonction:  %s\n", ft_strstr(argv[1], argv[2]));
	printf("strstr:  %s\n", strstr(argv[1], argv[2]));
	(void)	argc;
}*/
