/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:56:49 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/13 20:01:19 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	int		j;

	if (!n && !big)
		return (NULL);
	if (*small == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (small[j] && big[i + j] && i + j < n
				&& big[i + j] == small[j])
				j++;
			if (small[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char big[] ="Hello! year new year new 2000 years";
	char small[] ="year";

	printf("%s\n", ft_strnstr(big, small, 4));
	return (0);
}*/
