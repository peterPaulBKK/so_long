/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:26:22 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 02:42:06 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_render(t_game *game, t_map *definitive_map)
{
	definitive_map->mlx = mlx_init();
	definitive_map->win = mlx_new_window(definitive_map->mlx, (game->len - 1) * 64, \
	(game->height - 1) * 64, "Game");
}
