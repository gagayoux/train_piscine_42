/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:41:24 by user42            #+#    #+#             */
/*   Updated: 2020/07/23 15:57:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

long		operator_plus(long nbr1, long nbr2, intmax_t res_nbr)
{
	res_nbr = nbr1 + nbr2;
	return (res_nbr);
}

long		operator_mine(long nbr1, long nbr2, intmax_t res_nbr)
{
	res_nbr = nbr1 - nbr2;
	return (res_nbr);
}

long		operator_divid(long nbr1, long nbr2, intmax_t res_nbr)
{
	res_nbr = nbr1 / nbr2;
	return (res_nbr);
}

long		operator_multi(long nbr1, long nbr2, intmax_t res_nbr)
{
	res_nbr = nbr1 * nbr2;
	return (res_nbr);
}

long		operator_mod(long nbr1, long nbr2, intmax_t res_nbr)
{
	res_nbr = nbr1 % nbr2;
	return (res_nbr);
}
