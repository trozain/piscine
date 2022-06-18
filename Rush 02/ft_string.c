/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:01:43 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 11:16:29 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strcat(char *dest, char *src)
{
	int	o;
	int	i;

	if (!src || !dest)
		return (dest);
	i = 0;
	o = -1;
	while (dest[++o])
		;
	while (src[i])
	{
		dest[o + i] = src[i];
		++i;
	}
	dest[o + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	if (!str)
		return (0);
	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strncpy(char *dest, char*src, unsigned int n)
{
	unsigned int	i;
	int				done;

	done = 0;
	i = 0;
	while (i < n)
	{
		if (!done && src[i] == '\0')
		{
			done = 1;
		}
		if (done)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		++i;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	o;
	unsigned int	i;

	i = 0;
	o = -1;
	while (dest[++o])
		;
	while (i < nb && src[i])
	{
		dest[o + i] = src[i];
		++i;
	}
	dest[o + i] = '\0';
	return (dest);
}
