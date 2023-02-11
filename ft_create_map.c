/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:42:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/11 20:16:22 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_map(t_game *game, char *file_name, int fd)
{
	int		height;
	t_map	*definitive_map;
		
	height = 0;
	while(height < game->height)
	{
		game->map[height] = get_next_line(fd);
		height++;
	}
	game->map[height] = NULL;
	close(fd);
	ft_check_border(game);
	ft_locate_p(game);
	definitive_map = (t_map *)malloc(sizeof(t_map));
	ft_locate_e(game, definitive_map);
	ft_printf("location of P x = %d y = %d\n", game->p_pos_r, game->p_pos_c);
	ft_printf("location of exit in definitive map row = %d col = %d\n", definitive_map->r_e, definitive_map->c_e);
	ft_printf("fd = %d file = %s game- height = %d\n", fd, file_name, game->height);
}

void	ft_malloc_game_2d_string(t_game *game, char *file_name)
{
	int		fd;

	fd = open(file_name,O_RDONLY);
	game->map = (char **)malloc(sizeof(char *) * (game->height + 1));
	if (game->map == NULL)
	{
		ft_printf("malloc string failed\n");
		free_game(game);
	}
	else
		ft_create_map(game, file_name, fd);
}