/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:11:30 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/11 01:46:08 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	if (!s)
		return ;
	index = 0;
	if (fd < 0)
		return ;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char s[] = "Hello!";
	ft_putendl_fd(s, 1);
	return (0);
}*/
