/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:52:43 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 00:35:26 by pniyom           ###   ########.fr       */
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
	get_next_line(fd);
	close(fd);
	ft_malloc_game_2d_string(game, file_name);
}
/* the loop does not 
send neither the first row
nor last row to ft_check_line
*/