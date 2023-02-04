/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:26:15 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/13 19:43:32 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!size)
		return (ft_strlen(src));
	j = 0;
	while (dest[j] && j < size)
		j++;
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	char src[] ="Hello!";
	char dest[] ="Llllll";
	
	ft_strlcat(dest, src, 12);
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcat(dest, src, 12));	
	return (0);
}*/
