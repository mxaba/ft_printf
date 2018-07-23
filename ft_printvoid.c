/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:03:49 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 12:03:51 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printvoid(va_list ap)
{
	char			*p;
	unsigned long	c;

	ft_putstr("0x");
	c = va_arg(ap, unsigned long);
	p = ft_htoa(c);
	ft_putstr(p);
	return (ft_strlen(p) + 2);
}
