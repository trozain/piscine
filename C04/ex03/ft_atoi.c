/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:03:44 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 17:50:26 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	a;
	int	n;
	int	i;

	a = 1;
	n = 0;
	i = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * a);
}
/*
int main ()
{
int val;
char str[20];
strcpy(str, "  ---+--+1234ab567");
val = ft_atoi(str);
printf("%d\n", val);
return(0);
}*/
