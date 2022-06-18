/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluisier <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 03:00:10 by gluisier          #+#    #+#             */
/*   Updated: 2021/09/19 03:03:03 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		is_new_line(char c);
int		ft_isspace(char c);
int		is_empty_line(char *line);
char	*skip_spaces(char *str);
void	init_buffer_to_zero(char *buffer, unsigned int size);
void	free_memory_of(char *buff1, char *buff2, char *buff3, char *buff4);
#endif
