/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:12:01 by trozain           #+#    #+#             */
/*   Updated: 2021/09/06 18:16:15 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			ft_putchar(' ');
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			if (! (x == 98 && y == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
