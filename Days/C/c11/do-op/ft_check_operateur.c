/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_operateur.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:50:59 by user42            #+#    #+#             */
/*   Updated: 2020/07/23 12:55:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_check_operateur(int ac, char *operateur, char *valeur2)
{
	if (ac != 4)
		return (0);
	if ((operateur[0] != '+' && operateur[0] != '-' && operateur[0] != '/' &&
	operateur[0] != '*' && operateur[0] != '%') || (operateur[1] != '\0'))
	{
		ft_putstr("0");
		return (0);
	}
	if (operateur[0] == '/' && valeur2[0] == '0')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if (operateur[0] == '%' && valeur2[0] == '0')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (1);
}
