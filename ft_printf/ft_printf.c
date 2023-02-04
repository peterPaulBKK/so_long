/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:16:44 by pniyom            #+#    #+#             */
/*   Updated: 2022/11/09 04:08:01 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *fmt, int i, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
		ret += ft_printf_arg(format, i, ap);
		i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (ret);
}
/*  
int	main(void)
{
	char	*pt;

	pt = "Hello! My name is";
	ft_printf("Print percent  %%\n", "haha");
	ft_printf("Print c  %c\n", 'h');
	ft_printf("Print s  %s\n", "hahahahah");
	ft_printf("Print d  %d\n", 11.93);
	ft_printf("Print i  %i\n", 11);
	ft_printf("Print unsigned int  %u\n", 4294967294);
	ft_printf("Print minus unsigned int  %u\n", -4294967294);
	ft_printf("Print x  %x\n", 4294967294);
	ft_printf("Print X  %X\n", 4294967294);
	ft_printf("Print Pointer  %p\n", pt);
	return (0);
}
*/

int	ft_printf_arg(const char *fmt, int i, va_list ap)
{
	if (fmt[i + 1] == '%')
		return (ft_putchar(fmt[i + 1]));
	else if (fmt[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (fmt[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (fmt[i +1] == 'u')
		return (ftputnbr_u(va_arg(ap, unsigned int)));
	else if (fmt[i + 1] == 'X')
		return (put_hex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (fmt[i + 1] == 'x')
		return (put_hex(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (fmt[i + 1] == 'p')
		return (ft_putstr("0x") + put_pointer(va_arg(ap, void *),
				"0123456789abcdef"));
	return (0);
}
