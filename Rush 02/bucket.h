/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:58:47 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/18 20:41:46 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUCKET_H
# define BUCKET_H

typedef struct s_bucket
{
	char			*key;
	char			*value;
	struct s_bucket	*next;
}	t_bucket;

t_bucket	*init_bucket(char *key, char *value);
void		free_bucket(t_bucket **bucket);

#endif
