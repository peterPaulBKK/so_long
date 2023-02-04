/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:09:26 by pniyom            #+#    #+#             */
/*   Updated: 2022/09/04 07:47:05 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signch(int sign, const char *str, int i, long long res)
{
	if ((sign == -1) && ((res > 9223372036854775807 / 10)
			|| (res == 9223372036854775807 / 10 && str[i] - '0' > 8)))
		return (0);
	else if ((sign == 1) && ((res > 9223372036854775807 / 10)
			|| (res == 9223372036854775807 / 10 && str[i] - '0' > 7)))
		return (-1);
	res = (res * 10) + (str[i++] - '0');
	return (res * sign);
}

int	ft_atoi(const char *s)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || \
			s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (res > 9223372036854775807 / 10
			|| (res == 9223372036854775807 / 10 && s[i] - '0' > 7))
			return (ft_signch(sign, s, i, res));
		res = (res * 10) + (s[i++] - '0');
	}	
	return (res * sign);
}

/*
int	main(void)
{
	char num[] = "    1234";

	printf("%d\n", ft_atoi(num));
	return (0);
}*/
