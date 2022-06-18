/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:22:45 by trozain           #+#    #+#             */
/*   Updated: 2021/09/20 22:46:46 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	is_lowercase = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			is_lowercase++;
		}
		i++;
	}
	if (is_lowercase != i)
		return (0);
	else
		return (1);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_str_is_lowercase(argv[1]));
	(void)	argc;
}*/
