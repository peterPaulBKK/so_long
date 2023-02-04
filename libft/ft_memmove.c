/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:38:13 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/10 10:47:05 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
			d[n] = s[n];
	return (dest);
}

/*int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "Hello+ it's me I've been wondering");
	puts(dest);
	ft_memmove(dest, src, 7);
	puts(dest);
	return (0);
}*/
