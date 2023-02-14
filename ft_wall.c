/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:56:18 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/14 16:46:33 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_wall(t_map *definitive_map)
{
	int	h;
	int	l;

	h = 0;
	while (definitive_map->map[h])
	{
		l = 0;
		while (definitive_map->map[h][l] && definitive_map->map[h][l] != '\n')
		{
			ft_put_img(definitive_map->map[h][l], definitive_map, h, l);
			l++;
		}
		h++;
	}
}
