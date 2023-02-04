/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 02:43:19 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/11 12:36:10 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char str[50];
	strcpy(str, "This is sxxxxxxx xxxxx xxx ");
	puts(str);
	ft_memset(str, '&', 7);
	puts(str);
	return (0);
}*/
