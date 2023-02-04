/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:43:52 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/16 19:23:50 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (len == 0 || start >= l)
		return (ft_strdup(""));
	if (len >= l - start)
		len = l - start;
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (start < l && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char sx[] = "Hello! How are you! Welcome! Have room ... good take care";
	printf("%s\n", ft_substr(sx, 4, 10));
	return (0);
}*/
