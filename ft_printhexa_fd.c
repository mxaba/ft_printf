/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:48:42 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 10:00:14 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printhexa_fd(int fd, va_list ap)
{
	char			*p;
	unsigned		c;

	c = va_arg(ap, unsigned int);
	p = ft_htoa(c);
	ft_putstr_fd(fd, p);
	return (ft_strlen(p));
}
