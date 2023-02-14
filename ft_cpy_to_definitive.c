/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_to_definitive.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:56:11 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/14 17:33:59 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_cpy_to_definitive(t_map *definitive_map, t_game *game)
{
	definitive_map->p_pos_r = game->p_pos_r;
	definitive_map->p_pos_c = game->p_pos_c;
	definitive_map->c = game->readable_c;
	definitive_map->height = game->height;
	ft_printf("p_pos_r = %d p_pos_c = %d map-c = %d map-height = %d\n", \
	definitive_map->p_pos_r, definitive_map->p_pos_c, definitive_map->c, \
	definitive_map->height);
	free(game);
}
