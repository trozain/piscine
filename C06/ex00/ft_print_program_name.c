/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:16:56 by trozain           #+#    #+#             */
/*   Updated: 2021/09/22 21:26:20 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_argv(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	ft_argv(*argv);
	write(1, "\n", 1);
	(void)argc;
}
/*
int main(int argc, char *argv[])
{
	write(1, *argv[0], 7);
	write(1, "\n", 1);
	(void) argc;
	return(0);
}*/
