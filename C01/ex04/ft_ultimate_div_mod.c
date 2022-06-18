/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:07:46 by trozain           #+#    #+#             */
/*   Updated: 2021/09/10 19:14:03 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 69;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("%d \n %d", a, b);
}
*/
