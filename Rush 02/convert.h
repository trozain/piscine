/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h		                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:30:31 by trozain           #+#    #+#             */
/*   Updated: 2021/09/19 22:15:14 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H
# include "h_map.h"

int		convert_to_word(char *nb, t_hmap *dict);
char	*convert_hundred(char c, t_hmap *dict);
char	*convert_ten(char *str, t_hmap *dict);

#endif
