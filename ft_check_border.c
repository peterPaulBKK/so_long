/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_border.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:27:08 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/11 16:53:24 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_border(t_game *game)
{
	ft_printf("border is not 1\n");
	free_map(game);
}

void	check_border(t_game *game, int h)
{
	int	i;
	int	row_len;

	i = 0;
	if (h == 0 || h == game->height - 1)
	{
		while(game->map[h][i] != '\0' && game->map[h][i] != '\n')
		{
			if (game->map[h][i] != '1')
				error_border(game);
			i++;
		}	
	}
	else
	{
		row_len = ft_strlen(game->map[h]) - 1;
		if(game->map[h][0] != '1' || game->map[h][row_len - 1] != '1')
			error_border(game);
	}
}

void	ft_check_border(t_game *game)
{
	int	h;
	
	h = 0;
	while(h < game->height)
	{
		check_border(game, h);
		h++;
	}
}