/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:59:23 by pniyom            #+#    #+#             */
/*   Updated: 2022/09/10 23:46:03 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_s(char s, char c)
{	
	if (s == c)
		return (1);
	return (0);
}

int	num_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_s(str[i], c) == 0)
		{
			count++;
			while (str[i] && is_s(str[i], c) == 0)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_splitter(int *i, char const *str, int size)
{
	int		j;
	char	*dest;

	dest = malloc(sizeof(char) * size + 1);
	if (!dest || !i || !str)
		return (NULL);
	j = 0;
	while (j < size)
	{
		dest[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	dest[size] = '\0';
	return (dest);
}

char	**ft_prot(char const *s, char c, char **dest)
{
	int	j;
	int	k;
	int	i;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (is_s(s[i], c) == 0)
		{
			j = 0;
			while (s[i + j] && is_s(s[i + j], c) == 0)
				j++;
			dest[k] = ft_splitter(&i, s, j);
			k++;
		}
		else
			i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (num_word(s, c) + 1));
	if (!dest)
		return (NULL);
	dest[num_word(s, c)] = NULL;
	dest = ft_prot(s, c, dest);
	return (dest);
}
/*
int	main(void)
{
	char *s = "llfgkdddlllllllkllgllk";
	char c = 'l';

	printf("%s\n", *ft_split(s, c));
	return (0);
}*/
