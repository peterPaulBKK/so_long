/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:55:19 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/14 18:07:55 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_hook(t_map *definitive_map)
{
	definitive_map->step = 0;
	definitive_map->take_c = 0;
	mlx_key_hook(definitive_map->win, ft_key_hook, definitive_map);
	return ;
}