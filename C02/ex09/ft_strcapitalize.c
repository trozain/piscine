/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:23:37 by trozain           #+#    #+#             */
/*   Updated: 2021/09/21 19:07:59 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	alpha(char str)
{
	int			i;
	int			not_alpha;
	const char	str_no_alpha[] = " ~`!@#$%^&*()_+{}|\":><?/,.';[]\\-=:";

	i = 0;
	not_alpha = 0;
	while (str_no_alpha[i] != '\0')
	{
		if (str == str_no_alpha[i])
			not_alpha++;
		i++;
	}
	if (not_alpha == 0)
		return (0);
	else
		return (1);
}

int	down(char str)
{
	int	i;

	i = 0;
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int	up(char str)
{
	int	i;

	i = 0;
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (i != 0 && alpha(str[i - 1]) == 1 && down(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (i != 0 && alpha(str[i - 1]) == 0 && up(str[i]) == 1)
			str[i] = str[i] + 32;
	}
	return (str);
}
/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; valide+moi+stp";
	ft_trapitalize(str);
	
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
