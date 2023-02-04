/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:55:40 by pniyom            #+#    #+#             */
/*   Updated: 2022/09/04 00:54:38 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	cat;

	cat = (char)(c);
	i = ft_strlen(str);
	j = -1;
	while (i != -1)
	{
		if (str[i] == cat)
		{
			j = i;
			return ((char *)&str[j]);
		}
		i--;
	}
	if (j == -1)
		return ((char *)0);
	return (NULL);
}
/*
int	main(void)
{
	char	*puntero;

	char c= 'H';
	char str[] = "Hello sister power!";
	puntero = ft_strrchr(str, c);
	printf("value of string to search | %s\n", str);
	printf("The value |%c| was searched and it turned | %s\n", c, puntero);
	return (0);
}*/	
