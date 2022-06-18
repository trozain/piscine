/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:34:25 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 21:27:50 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{	
	int	i;

	i = 1;
	if (argc == 0)
		return (1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
