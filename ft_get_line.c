/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:52:43 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/10 23:42:37 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_line(t_game *game, int fd, char *file_name)
{
	char	*line;

	line = get_next_line(fd);
	if (line == NULL)
	{
		ft_printf("File is empty\n");
		free_game(game);
	}
	game->len = ft_s_len_with_nl(line);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		if (game->len != ft_s_len_with_nl(line))
		{
			game->height++;
			free(line);
			break ;
		}
		ft_check_line(line, game);
		game->height++;
	}
	close(fd);
	ft_create_map(game, file_name);
}
