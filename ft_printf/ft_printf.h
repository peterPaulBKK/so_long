/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:52:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/04 23:47:42 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_recipe
{
	int		minus_flag;
	int		zero_flag;
	int		space_flag;
	int		plus_flag;
	int		hash_flag;
	int		width;
	int		precision;
	int		null_precision;
	char	length;
	char	type;
}	t_recipe;

int						ft_putchar(char c);
int						ft_printf(const char	*format, ...);
char					*ft_strchr(const char *str, int c);
int						ft_putstr(char *str);
int						ft_strlen(const char *str);
int						ft_putnbr(int nbr);
char					*ft_itoa(int n);
int						ftputnbr_u(unsigned int nbr);
char					*ft_utoa(unsigned int n);
int						put_hex(unsigned int nbr, char *base);
int						put_pointer(void *nbr, char *base);

#endif
