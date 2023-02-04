/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:37:13 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/13 02:28:34 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char str[50];	
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 5);
	puts(str);
	return (0);
}*/
