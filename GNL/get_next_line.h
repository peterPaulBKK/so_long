/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:21:55 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/05 01:49:36 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include<stdlib.h>
# include<unistd.h>
# include"../so_long.h"

char	*get_next_line(int fd);
char	*search_string(const char *s, int c);
char	*join_string(char *s1, char const *s2);
size_t	string_line_copy(char *dest, char const *src, size_t size);
size_t	find_len(char const *str);
#endif