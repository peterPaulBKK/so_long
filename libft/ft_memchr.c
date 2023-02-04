/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:28:51 by pniyom            #+#    #+#             */
/*   Updated: 2022/09/03 18:39:01 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	cr;

	i = 0;
	str = (unsigned char *)s;
	cr = (unsigned char)c;
	while (n > i)
	{
		if (str[i] == cr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char c = 's';
	char s[] = "Hellos!eee";

	printf("The s : %s\n", s);
	printf("The result : %p", ft_memchr(s, c, 7));
	return (0);
}*/
