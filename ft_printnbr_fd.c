/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:51:22 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 10:04:53 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printnbr_fd(int fd, va_list ap)
{
	int		c;
	char 	*p;

	c = va_arg(ap, int);
	p = ft_itoa(c);
	ft_putstr_fd(fd, p);
	return (ft_strlen(p));
}
