/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 02:27:07 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/27 20:07:06 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	dest[50];
	char	src[50];

	strcpy(src, "Hello! it's me I have ncev seen you before");
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	ft_strlcpy(dest, src, 4);
	printf("dest : %s\n", dest);
	printf("the number of char in the string : %ld\n", ft_strlcpy(dest, src, 4));

	return (0);
}*/
