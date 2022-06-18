/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:20:07 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 20:49:23 by trozain          ###   ########.fr       */
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

	i = argc - 1;
	if (argc == 0)
		return (1);
	while (i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		--i;
	}
	return (0);
}
