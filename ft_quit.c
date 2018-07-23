/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:33:46 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 11:42:41 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_quit(int system, char *e_perso)
{
	if (system)
		ft_printf(RED "%s: %s\n" RESET, strerror(system), e_perso);
	else
		ft_printf(RED "%s\n" RESET, e_perso);
	exit(EXIT_FAILURE);
}
