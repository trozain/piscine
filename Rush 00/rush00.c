/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofleury <jofleury@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:20:32 by jofleury          #+#    #+#             */
/*   Updated: 2021/09/05 14:07:54 by jofleury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int x, char begining, char ending, char other)
{
	int	j;

	j = 1;
	if (x <= 0)
	{
		return ;
	}
	ft_putchar (begining);
	if (x == 1)
	{
		ft_putchar('\n');
	}
	while (j <= x - 2)
	{
		ft_putchar(other);
		j++;
	}
	if (x >= 2)
	{
		ft_putchar(ending);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		l;
	char	content[2];

	l = 1;
	while (l <= y)
	{
		content[0] = '|';
		content[1] = ' ';
		if (l == 1 || l == y)
		{
			content[0] = 'o';
			content[1] = '-';
		}
		write_line(x, content[0], content[0], content[1]);
		l++;
	}
}
