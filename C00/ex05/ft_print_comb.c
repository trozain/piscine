/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:18:47 by trozain           #+#    #+#             */
/*   Updated: 2021/09/06 18:10:08 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	fonktion(char c, char d, char u);

void	putchar(char u)
{
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				fonktion(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	fonktion(char c, char d, char u)
{
	putchar(c);
	putchar(d);
	putchar(u);
	if (c < '7')
	{
		putchar(',');
		putchar(' ');
	}
}
