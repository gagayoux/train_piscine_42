/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:27:33 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 13:08:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define IM intmax_t

# include "unistd.h"
# include <stdint.h>

typedef	struct		s_operator
{
	char	operator;
	long	(*ptr_fct)(long, long, long);
}					t_operator;

int					ft_check_operateur(int ac, char *operateur, char *valeur2);
void				ft_putstr(char *str);
void				ft_putnbr(intmax_t nb);
int					ft_if_op_and_nbr2_is_neg(char *operateur, long nbr2);
long				ft_atoi(char *str);
IM					operator_plus(IM nbr1, IM nbr2, IM res_nbr);
IM					operator_mine(IM nbr1, IM nbr2, IM res_nbr);
IM					operator_divid(IM nbr1, IM nbr2, IM res_nbr);
IM					operator_multi(IM nbr1, IM nbr2, IM res_nbr);
IM					operator_mod(IM nbr1, IM nbr2, IM res_nbr);
void				ft_do_op(long nbr1, char *operator, long nbr2);

#endif
