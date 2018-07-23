/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:37:01 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 11:25:49 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		ft_chooseprint(va_list ap, char c)
{
	if (c == 'c')
		return (ft_printchar(ap));
	else if (c == 's')
		return (ft_printstr(ap));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(ap));
	else if (c == 'u')
		return (ft_printunsigned(ap));
	else if (c == 'o')
		return (ft_printoctal(ap));
	else if (c == 'x')
		return (ft_printhexa(ap));
	else if (c == 'p')
		return (ft_printvoid(ap));
	else if (c == '%')
		return (ft_putchar(c));
	return (0);
}

int				ft_printf(const char *format, ...)
{
	int			i;
	int			len;
	va_list		ap;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_chooseprint(ap, format[i + 1]);
			i++;
		}
		else if (format[i] != '%')
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
