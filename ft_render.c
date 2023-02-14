/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:26:22 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 14:39:02 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_render(t_game *game, t_map *definitive_map)
{
	definitive_map->mlx = mlx_init();
	definitive_map->win = mlx_new_window(definitive_map->mlx, (game->len - 1) * 64, \
	(game->height - 1) * 64, "Game");
	definitive_map->wall = mlx_xpm_file_to_image(definitive_map->mlx, "img/wall.xpm", \
	&game->len, &game->height);
	definitive_map->floor = mlx_xpm_file_to_image(definitive_map->mlx, \
	"./img/floor64.xpm", &game->len, &game->height);
	definitive_map->player = mlx_xpm_file_to_image(definitive_map->mlx, \
	"./img/floor64.xpm", &game->len, &game->height);)
	// mlx_hook(definitive_map->win, 17, 0L, 
}
