/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:23:32 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 09:31:04 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	hexavalue(int x)
{
	if (0 <= x && x <= 9)
		return (48 + x);
	else if (10 <= x && x <= 15)
	{
		x = x - 10;
		return (97 + x);
	}
	return (0);
}

char		*ft_htoa(unsigned long n)
{
	char			*p;
	int				size;
	unsigned long	x;

	x = n;
	size = 0;
	while (x > 16)
	{
		x = x / 16;
		size++;
	}
	p = (char *)malloc(sizeof(p) * (size + 1));
	if (p)
	{
		p[size + 1] = '\0';
		while (size >= 0)
		{
			x = n % 16;
			p[size] = hexavalue(x);
			n = n / 16;
			size--;
		}
	}
	return (p);
}
