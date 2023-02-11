/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:32:35 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 02:28:38 by pniyom           ###   ########.fr       */
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
}			t_map;

void	ft_check_ac_equal_2(char *av, t_game *game);
void	free_game(t_game *game);
void	ft_get_line(t_game *game, int fd, char *file_name);
int		ft_s_len_with_nl(char *str);
void	ft_check_line(char *line, t_game *game);
void	ft_malloc_game_2d_string(t_game *game, char *file_name);
void	ft_create_map(t_game *game, char *file_name, int fd);
void	ft_check_border(t_game *game);
void	free_map(t_game *game);
void	ft_locate_p(t_game *game);
void	ft_locate_e(t_game *game, t_map *map);
void	ft_flood_fill(char **map, t_game *game, int row, int column);
void	free_map_only(t_game *game);
void	ft_check_error_e_c(t_game *game);
void	ft_create_definitive_map(t_game *game,
			t_map *definitive_map, char *file_name);
void	ft_render(t_game *game, t_map *definitive_map);

# ifndef KEY_H
#  define KEY_H

#  define X_EVENT_KEY_PRESS        2
#  define X_EVENT_KEY_RELEASE    3
#  define X_EVENT_KEY_EXIT        17
#  ifdef __linux__
#   define KEY_CTRL            65507
#   define KEY_ENTER            65293
#   define KEY_SPACE            32
#   define KEY_ESC            65307
#   define KEY_LEFT            65361
#   define KEY_RIGHT            65363
#   define KEY_UP            65362
#   define KEY_DOWN            65364
#   define KEY_A                97
#   define KEY_S                115
#   define KEY_D                100
#   define KEY_W                119
#   define KEY_R                114
#  else
#   define KEY_CTRL            256
#   define KEY_ENTER            36
#   define KEY_SPACE            49
#   define KEY_ESC            53
#   define KEY_LEFT            123
#   define KEY_RIGHT            124
#   define KEY_UP            126
#   define KEY_DOWN            125
#   define KEY_A                0
#   define KEY_S                1
#   define KEY_D                2
#   define KEY_W                13
#   define KEY_R                15
#  endif
# endif

#endif