/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:10:39 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/13 10:51:18 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*pointer;

	if (n >= 4294967295 && size >= 4294967295)
		return (NULL);
	if (n == 0 || size == 0)
		return (malloc(0));
	pointer = malloc(size * n);
	if (pointer == NULL)
		return (NULL);
	ft_memset((unsigned char *)pointer, 0, n * size);
	return (pointer);
}
