/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:23:03 by trozain           #+#    #+#             */
/*   Updated: 2021/09/20 22:47:28 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	i = 0;
	is_uppercase = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			is_uppercase++;
		}
		i++;
	}
	if (is_uppercase != i)
		return (0);
	else
		return (1);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_str_is_uppercase(argv[1]));
	(void)	argc;
}*/
