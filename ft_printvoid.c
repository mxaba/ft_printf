/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:13:13 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/19 09:16:30 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printvoid(va_list ap)
{
	char			*p;
	unsigned int	c;

	ft_putstr("0x");
	c = va_arg(ap, unsigned int);
	p = ft_htoa(c);
	ft_putstr(p);
	return (ft_strlen(p) + 2);
}
