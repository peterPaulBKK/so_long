/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:52:43 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/05 02:01:39 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_line(t_game *game, int fd, char *file_name)
{
		char	*line;

		line = get_next_line(fd);
		ft_printf("get line is called %d %d %s\n", game->height, fd, file_name);
		ft_printf("%s\n",line);

}
//function get_next_line returns each line of file.ber