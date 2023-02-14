/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:22:18 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/14 17:33:22 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_floor(t_map *definitive_map)
{
	int	h;
	int	l;

	h = 0;
	while (definitive_map->map[h])
	{
		l = 0;
		ft_printf("h = %d\n", h);
		while (definitive_map->map[h][l] && definitive_map->map[h][l] != '\n')
		{
			ft_printf("l = %d ", l);
			mlx_put_image_to_window(definitive_map->mlx, definitive_map->win, \
			definitive_map->floor, l * 64, h * 64);
			l++;
		}
		h++;
	}
}
