/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:27:55 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 16:11:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_operator	g_tab_ptr[6] =
{
	{ '+', &operator_plus },
	{ '-', &operator_mine },
	{ '/', &operator_divid },
	{ '*', &operator_multi },
	{ '%', &operator_mod },
	{ '\0', NULL},
};

int			ft_if_op_and_nbr2_is_neg(char *operator, int nbr2)
{
	if (nbr2 < 0 && *operator == '-')
		return (1);
	return (0);
}

void		ft_ptr_fct(int nbr1, int nbr2, char *operator)
{
	long		res_nbr;
	int			i;

	i = 0;
	while (g_tab_ptr[i].operator != '\0')
	{
		if (operator[0] == g_tab_ptr[i].operator)
			res_nbr = g_tab_ptr[i].ptr_fct(nbr1, nbr2, res_nbr);
		i++;
	}
	ft_putnbr(res_nbr);
}

void		ft_do_op(int nbr1, char *operator, int nbr2)
{
	if (ft_if_op_and_nbr2_is_neg(operator, nbr2) == 1)
	{
		operator[0] = '+';
		nbr2 = nbr2 * -1;
	}
	ft_ptr_fct(nbr1, nbr2, operator);
}
