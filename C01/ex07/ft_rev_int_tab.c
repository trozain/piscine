/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:47:49 by trozain           #+#    #+#             */
/*   Updated: 2021/09/14 13:34:08 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		a = tab[i];
		tab[i] = tab[j];
		tab[j] = a;
		j--;
		i++;
	}
}
/*
int main(void)
{
	int b[10];
	int i;

	i = 0;
	b[0] = 11;
	b[1] = 203;
	b[2] = 33;
	b[3] = 44;
	b[4] = 505;
	b[5] = 666;
	b[6] = 79;
	b[7] = 89;
	b[8] = 99;
	b[9] = 100;
	
	ft_rev_int_tab(b,10);
	while (*b && i < 10)
	{
	printf("%d \n", b[i]);
	i++;
	}
}
*/
