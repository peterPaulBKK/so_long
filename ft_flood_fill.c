/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:48:49 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 01:01:34 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_flood_fill(char **map, t_game *game, int row, int column)
{
	int	height;

	height = game->height;
	if (column < 0 || row < 0 || row > height - 1 || column > game->len - 1)
		return ;
	if (map[row][column] == '1')
		return ;
	if (map[row][column] == 'C')
		game->num_c++;
	if (map[row][column] == 'E')
		game->num_e++;
	map[row][column] = '1';
	ft_flood_fill(map, game, row + 1, column);
	ft_flood_fill(map, game, row - 1, column);
	ft_flood_fill(map, game, row, column + 1);
	ft_flood_fill(map, game, row, column - 1);
}
/* we use floodfill
for checking if there is
any error of path to check
if num_c is equal to c
that was read in the begining
*/
