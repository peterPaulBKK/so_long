/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_border.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:27:08 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/11 16:42:36 by pniyom           ###   ########.fr       */
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
	if (h == 0 || game->height - 1)
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
		ft_printf("enter second case\n");
		ft_printf("%s\n", game->map[h]);
		row_len = ft_strlen(game->map[h]) - 1;
		printf("strlen returned value = %d\n", row_len);
		if(game->map[h][0] != '1' || game->map[h][row_len - 1] != '1')
			error_border(game);
		else
			ft_printf("border is OK\n");
	}
}

void	ft_check_border(t_game *game)
{
	int	h;
	
	h = 0;
	ft_printf("game->height = %d\n", game->height);
	while(h < game->height)
	{
		ft_printf("h = %d\n", h);
		ft_printf("%s\n", game->map[h]);
		check_border(game, h);
		h++;
	}
}