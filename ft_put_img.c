/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:37:47 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/14 16:46:45 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_wall(t_map *definitive_map, int h, int l)
{
	mlx_put_image_to_window(definitive_map->mlx, \
	definitive_map->win, \
	definitive_map->wall, l * 64, h * 64);
}

void	ft_put_player(t_map *definitive_map, int h, int l)
{
	mlx_put_image_to_window(definitive_map->mlx, \
	definitive_map->win, \
	definitive_map->player, l * 64, h * 64);
}

void	ft_put_exit(t_map *definitive_map, int h, int l)
{
	mlx_put_image_to_window(definitive_map->mlx, \
	definitive_map->win, \
	definitive_map->exit, l * 64, h * 64);
}

void	ft_put_collect(t_map *definitive_map, int h, int l)
{
	mlx_put_image_to_window(definitive_map->mlx, \
	definitive_map->win, \
	definitive_map->collect, l * 64, h * 64);
}

void	ft_put_img(char c, t_map *definitive_map, int h, int l)
{
	if (c == '1')
	{
		ft_put_wall(definitive_map, h, l);
	}
	else if (c == 'P')
	{
		ft_put_player(definitive_map, h, l);
	}
	else if (c == 'E')
	{
		ft_put_exit(definitive_map, h, l);
	}
	else if (c == 'C')
	{
		ft_put_collect(definitive_map, h, l);
	}
}
