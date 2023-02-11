/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:42:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/11 15:54:03 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_map(t_game *game, char *file_name, int fd)
{
	int		height;
		
	height = 0;
	while(height < game->height)
	{
		game->map[height] = get_next_line(fd);
		height++;
	}
	game->map[height] = NULL;
	close(fd);
	ft_check_border(game);
	ft_printf("fd = %d file = %s game- height = %d\n", fd, file_name, game->height);
}

void	ft_malloc_game_2d_string(t_game *game, char *file_name)
{
	int		fd;

	fd = open(file_name,O_RDONLY);
	game->map = (char **)malloc(sizeof(char *) * (game->height + 1));
	if (game->map == NULL)
	{
		ft_printf("malloc string failed\n");
		free_game(game);
	}
	else
		ft_create_map(game, file_name, fd);
}