/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:47:11 by pniyom            #+#    #+#             */
/*   Updated: 2022/09/03 19:09:00 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;
	size_t			i;

	i = 0;
	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	while (i < n)
	{
		if (source1[i] != source2[i])
			return (source1[i] - source2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	result;

	char source1[] = "Hellloxxxx";
	char source2[] = "Hellloyxxx";
	result = ft_memcmp(source1, source2, 8);
	printf("the sult of menmcmp = %d", result);

	return (0);
}*/
