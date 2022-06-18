/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:46:24 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 02:14:41 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("fibonacci: %d\n", ft_fibonacci(atoi(argv[1])));
	(void) argc;
	return(0);
}*/
