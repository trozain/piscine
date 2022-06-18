/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:52:08 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 20:29:12 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

int	is_number_correct(char *str);
int	are_all_zeros(char *str);
int	parse_line(char *line, t_hmap *map);

#endif
