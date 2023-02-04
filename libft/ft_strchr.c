/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:55:40 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/09 17:24:46 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c > 256)
		c = c % 256;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int	main(void)
{
	char	*puntero;

	char c = 'e';
	char str[] = "Hello sister!";
	puntero = ft_strchr(str, c);
	printf("value of string to search | %s\n", str);
	printf("The value |%c| was searched and it turned | %s\n", c, puntero);
	return (0);
}*/	
