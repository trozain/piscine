/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 03:10:59 by trozain           #+#    #+#             */
/*   Updated: 2021/09/23 18:13:50 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 1 || nb == 0 || nb == 4)
		return (0);
	if (nb % 2 == 0 || nb < 0)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	printf("= %d\n", ft_is_prime(atoi(argv[1])));
	printf("%d\n", ft_is_prime(-5));
	printf("%d\n", ft_is_prime(-652));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(1640045925));
	printf("%d\n", ft_is_prime(2147395600));
	printf("%d\n", ft_is_prime(2147483646));
	printf("%d\n", ft_is_prime(191767104));
	printf("%d\n", ft_is_prime(1724647880));
	printf("%d\n", ft_is_prime(343620369));
	printf("%d\n", ft_is_prime(633344448));
	printf("%d\n", ft_is_prime(1999980443));
	printf("%d\n", ft_is_prime(1701970675));
	printf("%d\n", ft_is_prime(332880025));
	printf("%d\n", ft_is_prime(716910244));
	printf("1999981153 = %d\n", ft_is_prime(1999981153));
	printf("2030174822 = %d\n", ft_is_prime(2030174822));
	(void) argc;
	return (0);
}
