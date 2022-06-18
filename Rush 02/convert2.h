/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:28:56 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 21:45:34 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT2_H
# define CONVERT2_H
# include <stddef.h>
# include "h_map.h"

char	*ctostr(char c, size_t s);
char	*get_chunk(char *nb, size_t mod, size_t nb_chunk, size_t chunk_nb);
char	*manage_zero_character(char *word);
int		write_chunk(char *nb, t_hmap *dict, size_t nb_chunk, int *first);

#endif
