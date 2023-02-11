/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_definitive_map.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:08:30 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 02:46:05 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_definitive_map(t_game *game,
		t_map *definitive_map, char *file_name)
{
	int	i;
	int	fd;

	i = -1;
	definitive_map->map = (char **)malloc(sizeof(char *) * (game->height + 1));
	if (definitive_map->map == NULL)
	{
		ft_printf("malloc definitive map error!\n");
		free(definitive_map);
		free_map(game);
	}
	fd = open(file_name, O_RDONLY);
	while (++i < game->height)
	{
		definitive_map->map[i] = get_next_line(fd);
	}
	definitive_map->map[i] = NULL;
	close(fd);
	ft_render(game, definitive_map);
}
