/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:41:24 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 15:45:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

long		operator_plus(int nbr1, int nbr2, long res_nbr)
{
	res_nbr = nbr1 + nbr2;
	return (res_nbr);
}

long		operator_mine(int nbr1, int nbr2, long res_nbr)
{
	res_nbr = nbr1 - nbr2;
	return (res_nbr);
}

long		operator_divid(int nbr1, int nbr2, long res_nbr)
{
	res_nbr = nbr1 / nbr2;
	return (res_nbr);
}

long		operator_multi(int nbr1, int nbr2, long res_nbr)
{
	res_nbr = nbr1 * nbr2;
	return (res_nbr);
}

long		operator_mod(int nbr1, int nbr2, long res_nbr)
{
	res_nbr = nbr1 % nbr2;
	return (res_nbr);
}
