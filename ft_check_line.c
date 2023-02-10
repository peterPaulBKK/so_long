/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:33:25 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/10 23:36:44 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	line_error(char *line, t_game *game)
{
	ft_printf("The lines do not contain any collectable\n");
	ft_printf("or the line has more than one player\n");
	ft_printf("or it has more than one exit");
	free(line);
	free_game(game);
}
/* this funcion may need to also free game->map*/

void	alien_character(char *line, t_game *game, char c)
{
	ft_printf("found %c that is not allowed character\n", c);
	free(line);
	free_game(game);
}

void	ft_check_line(char *line, t_game *game)
{
	static int	p;
	static int	c;
	static int	e;
	int			i;

	i = -1;
	if ((line == NULL && c < 1) || p > 1 || e > 1)
		line_error(line, game);
	while (line && line[++i])
	{
		if (line[i] == 'C')
			c++;
		if (line[i] == 'E')
			e++;
		if (line[i] == 'P')
			p++;
		if (ft_strchr("01PCE\n", line[i]) == NULL)
			alien_character(line, game, line[i]);
	}
	game->readable_c = c;
}
/* as the line start sending 
from the second line onward
if p or c is in the first line
it will not be counted by 
ft_check_line*/
