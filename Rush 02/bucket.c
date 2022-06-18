/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:00:06 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/18 22:31:56 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bucket.h"
#include <stddef.h>
#include <stdlib.h>

t_bucket	*init_bucket(char *key, char *value)
{
	t_bucket	*b;

	b = malloc(sizeof(t_bucket));
	if (!b)
		return (NULL);
	b->key = key;
	b->value = value;
	b->next = NULL;
	return (b);
}

void	free_bucket(t_bucket **bucket)
{
	t_bucket	*b;

	b = *bucket;
	if (!b)
		return ;
	if (b->key)
		free(b->key);
	if (b->value)
		free(b->value);
	free(b);
	*bucket = NULL;
}
