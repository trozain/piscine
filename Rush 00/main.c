/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofleury <jofleury@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:20:32 by jofleury          #+#    #+#             */
/*   Updated: 2021/09/14 16:59:25 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	rush(int c, int l);

int	main(int argc, char *argv[])
{
	rush(atoi(argv[1]), atoi(argv[2]));
	(void) argc;
	return (0);
}
