/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:23:46 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/15 13:36:11 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (C + 32);
	return (C);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	char str[]="Hello! Welcome! 12334 %28 The sjsUUWs!";
	while (str[i] != '\0')
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	return (0);
}*/
