/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:18:01 by pniyom            #+#    #+#             */
/*   Updated: 2022/11/27 22:28:08 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	find_len(char const *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*search_string(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

size_t	string_line_copy(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (!size)
		return (len);
	while (i < (size - 1) && src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	*string_dup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*cp_str;

	i = 0;
	while (s[i])
		i++;
	size = (i + 1);
	cp_str = (char *)malloc(size * sizeof(char));
	if (!cp_str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cp_str[i] = s[i];
		i++;
	}
	return (cp_str);
}

char	*join_string(char *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		s1 = string_dup("");
	if (!s1 && !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	str = (char *)malloc(sizeof(char) * (1 + i + j));
	if (!str)
		return (NULL);
	j = 0;
	string_line_copy(str, s1, i + 1);
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free (s1);
	return (str);
}
