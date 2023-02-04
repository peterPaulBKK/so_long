/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ac_equal_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:33:53 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/05 01:54:58 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_ac_equal_2(char *file_name, t_game *game)
{
	char	*file_extension;
	int		fd;

	if (ft_strrchr(file_name, '.') == NULL)
	{
		ft_printf("file name doesn\'t have any extenstion\n");
		free_game(game);
	}
	file_extension = ft_strrchr(file_name, '.');
	if (ft_strncmp(file_extension, ".ber", 5) != 0)
	{
		ft_printf("file extension is not .ber\n");
		free_game(game);
	}
	else if (ft_strncmp(file_extension, ".ber", 5) == 0)
	{
		fd = open(file_name, O_RDONLY);
		if (fd < 0)
		{
			ft_printf("the file doesn\'t exist or cannot be read");
			free_game(game);
		}
		else
			ft_get_line(game, fd, file_name);
	}
}
/*the strcmp check 5 chars because it 
needs to also check the null end of the string also */