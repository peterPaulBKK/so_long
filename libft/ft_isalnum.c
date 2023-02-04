/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:17:10 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/11 00:26:14 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	char c = 'a';
	char s = '^';
	char n = '2';

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(s));
	printf("%d\n", ft_isalnum(n));
}*/
