/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_chunk.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:55:19 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 22:11:07 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CHUNK_H
# define CONVERT_CHUNK_H
# include <stddef.h>
# include "h_map.h"

char	*convert_chunk(char *chunk, size_t nb, t_hmap *dict);

#endif
