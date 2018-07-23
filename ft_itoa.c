/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:50:47 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 08:40:28 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_nbrlen(int n)
{
	int		i;
	int		nb;

	i = 0;
	nb = n;
	if (n == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return ((n < 0) ? i + 1 : i);
}

char		*ft_itoa(int n)
{
	int		val;
	int		len;
	char 	*str;

	val = n;
	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(str) * len + 1);
	if (str)
	{
		str[len + 1] = '\0';
		while (len--)
		{
			str[len] = (n  < 0) ? (n % 10) * -1 + 48 : (n % 10) + 48;
			n = n / 10;
		}
		if (val < 0)
			str[0] = '-';
	}
	return (str);
}
