/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:42:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 01:11:13 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_map(t_game *game, char *file_name, int fd)
{
	int		height;
	t_map	*definitive_map;

	height = 0;
	while (height < game->height)
	{
		game->map[height] = get_next_line(fd);
		height++;
	}
	game->map[height] = NULL;
	close(fd);
	ft_check_border(game);
	ft_locate_p(game);
	definitive_map = (t_map *)malloc(sizeof(t_map));
	ft_locate_e(game, definitive_map);
	game->num_c = 0;
	game->num_e = 0;
	ft_flood_fill(game->map, game, game->p_pos_r, game->p_pos_r);
	ft_check_error_e_c(game);
	free_map_only(game);
	ft_create_definitive_map(game, definitive_map, file_name);
}
/* flood_fill fills
all the charater in game->map with 1
*/

void	ft_malloc_game_2d_string(t_game *game, char *file_name)
{
	int		fd;

	fd = open(file_name, O_RDONLY);
	game->map = (char **)malloc(sizeof(char *) * (game->height + 1));
	if (game->map == NULL)
	{
		ft_printf("malloc string failed\n");
		free_game(game);
	}
	else
		ft_create_map(game, file_name, fd);
}
