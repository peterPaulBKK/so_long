/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:32:35 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/10 23:44:32 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include "./MLX/mlx.h"
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include "GNL/get_next_line.h"

typedef struct s_game
{
	char	**map;
	int		height;
	int		len;
	int		p_pos_r;
	int		p_pos_c;
	int		num_c;
	int		readable_c;
	int		num_e;
}			t_game;

typedef struct s_actual_map
{
	char			**map;
	int				p_pos_r;
	int				p_pos_c;
	int				height;
	int				walk;
	int				c;
	int				take_c;
	int				step;
	int				r_decoy;
	int				c_decoy;
	int				r_e;
	int				c_e;
	void			*mlx;
	void			*win;
	void			*wall;
	void			*floor;
	void			*player;
	void			*collect;
	void			*exit;
}			t_actual_map;

void	ft_check_ac_equal_2(char *av, t_game *game);
void	free_game(t_game *game);
void	ft_get_line(t_game *game, int fd, char *file_name);
int		ft_s_len_with_nl(char *str);
void	ft_check_line(char *line, t_game *game);
void	ft_create_map(t_game *game, char *file_name);

#endif