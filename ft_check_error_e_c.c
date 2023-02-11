/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error_e_c.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:45:28 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/12 02:13:56 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_error_e_c(t_game *game)
{
	if (game->num_c != game->readable_c || game->num_e != 1)
	{
		ft_printf("path error!!\n");
		free_map(game);
	}
}
