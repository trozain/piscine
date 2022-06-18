/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:25:37 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 17:48:38 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char a);

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
/*
int main(int argc, char *argv[])
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(atoi(argv[1]));
	write(1, "\n", 1);
	(void) argc;
}*/
