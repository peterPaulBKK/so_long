/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_len_with_nl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:37:38 by pniyom            #+#    #+#             */
/*   Updated: 2023/02/08 12:02:39 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_s_len_with_nl(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && str[i] == '\n')
			i++;
		count++;
		if (str[i] != '\0')
			i++;
	}
	return (count);
}
/* this function returns the number of string 
including the end \n of that string */