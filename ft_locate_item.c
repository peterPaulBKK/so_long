/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_locate_item.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:51:13 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 00:40:06 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_locate_p(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			if (game->map[x][y] == 'P')
			{
				game->p_pos_r = x;
				game->p_pos_c = y;
				return ;
			}
			y++;
		}
		x++;
	}
}

void	ft_locate_e(t_game *game, t_map *map)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			if (game->map[x][y] == 'E')
			{
				map->c_e = y;
				map->r_e = x;
				return ;
			}
			y++;
		}
		x++;
	}
}
