/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:10:58 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 02:14:51 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_game(t_game *game)
{
	free(game);
	exit(EXIT_SUCCESS);
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->height)
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
	free(game->map);
	free_game(game);
}

void	free_map_only(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->height)
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
}
