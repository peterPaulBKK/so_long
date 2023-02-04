/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:23:46 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/15 13:32:20 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	char str[]="Hello! Welcome! 12334 %28 The sjsUUWs!";
	while (str[i] != '\0')
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	return (0);
}*/
