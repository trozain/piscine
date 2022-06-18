/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:12 by trozain           #+#    #+#             */
/*   Updated: 2021/09/08 18:04:05 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{		
		a++;
	}
	return (a);
}
/*
#include <stdio.h>

int main(void)
{	
	char *str = "pitierpitierpitierpitierpitierpiterpiter:(";
	ft_strlen(str);
	printf("%d \n", ft_strlen(str));
}
*/
