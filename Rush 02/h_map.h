/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:30:41 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 20:10:02 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_MAP_H
# define H_MAP_H
# define MAP_SIZE 251
# include <stddef.h>

typedef struct s_hmap	t_hmap;

t_hmap	*init_hmap(size_t size);
void	free_map(t_hmap **map);
int		add_element(t_hmap *map, char *key, char *value);
char	*get_value(t_hmap *map, char *key);

#endif
