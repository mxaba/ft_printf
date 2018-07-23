/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:12:04 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 09:24:01 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
static int	ft_chooseprint(int fd, va_list ap, char c)
{
	if (c == 'C' || c == 'c')
		return (ft_printchar_fd(fd, ap));
	else if (c == 's' || c == 'S')
		return (ft_printstr_fd(fd, ap));
	else if (c == 'd' || c == 'D' \
			|| c == 'i' || c == 'I')
		return (ft_printnbr_fd(fd, ap));
	else if (c == 'u' || c == 'U')
		return (ft_printunsigned_fd(fd, ap));
	else if (c == 'o' || c == 'O')
		return (ft_printoctal_fd(fd, ap));
	else if (c == 'x' || c == 'X')
		return (ft_printhexa_fd(fd, ap));
	else if (c == 'p' || c == 'P')
		return (ft_printvoid_fd(fd, ap));
	else if (c == '%')
		return (ft_putchar_fd(fd, c));
	return (0);
}

int			ft_printf_fd(int fd, const char *format, ...)
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
			len += ft_chooseprint(fd, ap, format[i + 1]);
			i++;
		}
		else if (format[i] != '%')
			len += ft_putchar_fd(fd, format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
