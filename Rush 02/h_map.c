/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:30:28 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 20:48:05 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "h_map.h"
#include "bucket.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct s_hmap
{
	t_bucket	**array;
	size_t		size;
};

size_t	hash(const char *str)
{
	size_t	hash;

	hash = 5381;
	while (*str)
		hash = ((hash << 5) + hash) + (unsigned char) *(str++);
	return (hash);
}

t_hmap	*init_hmap(size_t size)
{
	t_hmap	*map;
	size_t	i;

	map = malloc(sizeof(t_hmap));
	if (map == NULL)
		return (NULL);
	map->size = size;
	map->array = malloc(sizeof(t_bucket *) * size);
	if (map->array == NULL)
	{
		free(map);
		map = NULL;
	}
	i = 0;
	while (i < map->size)
	{
		map->array[i++] = 0;
	}
	return (map);
}

void	free_map(t_hmap **map)
{
	size_t		i;
	t_bucket	*b;
	t_bucket	*next;
	t_hmap		*m;

	m = *map;
	i = 0;
	while (i < m->size)
	{
		b = m->array[i];
		while (b != NULL)
		{
			next = b->next;
			free_bucket(&b);
			b = next;
		}
		++i;
	}
	free(m->array);
	free(m);
	*map = NULL;
}

int	add_element(t_hmap *map, char *key, char *value)
{
	t_bucket	*new;
	t_bucket	*prev;
	size_t		index;

	new = init_bucket(key, value);
	if (new == NULL)
		return (1);
	index = hash(key) % map->size;
	prev = map->array[index];
	if (prev == NULL)
	{
		map->array[index] = new;
		return (0);
	}
	while (prev->next || !ft_strcmp(prev->key, key))
	{
		if (!ft_strcmp(prev->key, key))
		{
			free(new);
			return (1);
		}
		prev = prev->next;
	}
	prev->next = new;
	return (0);
}

char	*get_value(t_hmap *map, char *key)
{
	size_t		index;
	t_bucket	*b;
	char		*dup;

	if (!key)
		return (NULL);
	index = hash(key) % map->size;
	b = map->array[index];
	while (b && ft_strcmp(b->key, key))
		b = b->next;
	if (!b)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(b->value) + 1));
	ft_strncpy(dup, b->value, ft_strlen(b->value) + 1);
	return (dup);
}
