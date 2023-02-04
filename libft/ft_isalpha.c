/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:43:50 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/11 00:06:22 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c = 'a';
	
	if (ft_isalpha(c) == 1)
		printf("%s\n", "is alphabet");
	else
		printf("%s\n", "is not alphabet");
	return (0);
}*/
