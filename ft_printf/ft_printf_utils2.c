/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:59:59 by pniyom            #+#    #+#             */
/*   Updated: 2022/11/09 02:28:41 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	int				i;
	unsigned int	aux;
	char			*ptr;

	i = num_len(n);
	aux = n;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux == 0)
		ptr[0] = '0';
	ptr[i--] = '\0';
	while (aux)
	{
		ptr[i--] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}

int	ftputnbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_utoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
