/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 04:01:50 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/11 01:05:59 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char src[30];
	char dest[30];

	strcpy(src, "Hello! it's mesd");
	puts(dest);
	ft_memcpy(dest, src, 5);
	puts(dest);
	return (0);
}*/
