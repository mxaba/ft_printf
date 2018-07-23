/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:04:03 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 12:04:06 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printvoid_fd(int fd, va_list ap)
{
	char			*p;
	unsigned long	c;

	ft_putstr_fd(fd, "0x");
	c = va_arg(ap, unsigned long);
	p = ft_htoa(c);
	ft_putstr_fd(fd, p);
	return (ft_strlen(p) + 2);
}
