/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:59:28 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 11:59:38 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

static int		ft_chooseprint(int fd, va_list ap, char c)
{
	if (c == 'c')
		return (ft_printchar_fd(fd, ap));
	else if (c == 's')
		return (ft_printstr_fd(fd, ap));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr_fd(fd, ap));
	else if (c == 'u')
		return (ft_printunsigned_fd(fd, ap));
	else if (c == 'o')
		return (ft_printoctal_fd(fd, ap));
	else if (c == 'x')
		return (ft_printhexa_fd(fd, ap));
	else if (c == 'p')
		return (ft_printvoid_fd(fd, ap));
	else if (c == '%')
		return (ft_putchar_fd(fd, c));
	return (0);
}

int				ft_printf_fd(int fd, char const *s, ...)
{
	int			i;
	int			len;
	va_list		ap;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_chooseprint(fd, ap, s[i + 1]);
			i++;
		}
		else if (s[i] != '%')
			len += ft_putchar_fd(fd, s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
