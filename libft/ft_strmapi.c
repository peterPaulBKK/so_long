/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:11:20 by pniyom            #+#    #+#             */
/*   Updated: 2022/08/27 19:01:36 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	my_func(unsigned int i, char str)
{
	printf("mi funcion interior : indice = %d y %c\n", i,  str);
	return (str - 32);
}

int	main(void)
{
	char s[] = "hello!";
	printf("%s\n", s);
	char *result = ft_strmapi(s, my_func);
	printf("The result is = %s\n", result);
	return (0);
}*/
