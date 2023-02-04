/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:17:48 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/05 01:08:41 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game			*game;
	t_actual_map	actual_map;

	game = (t_game *)malloc(sizeof(t_game));
	game->height = 1;
	actual_map.r_decoy = 0;
	actual_map.c_decoy = 0;
	if (ac != 2)
	{
		ft_printf("please specify map at the time of calling so_long\n");
		free_game(game);
	}
	else if (ac == 2)
	{
		ft_check_ac_equal_2(av[1], game);
	}
	return (0);
}
// we have to use arrow because game is a pointer but actual_map is a struct