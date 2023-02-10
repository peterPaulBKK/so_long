/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:42:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/10 23:47:48 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_map(t_game *game, char *file_name)
{
	ft_printf("height = %d  len = %d readable c = %d\n", game->height, game->len, game->readable_c);
	ft_printf("%s is file\n", file_name);
}