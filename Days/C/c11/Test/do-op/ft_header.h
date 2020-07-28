/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:27:33 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 16:06:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include "unistd.h"

typedef	struct		s_operator
{
	char	operator;
	long	(*ptr_fct)(int, int, long);
}					t_operator;

int					ft_check_operateur(int ac, char *operateur, char *valeur2);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_if_op_and_nbr2_is_neg(char *operateur, int nbr2);
int					ft_atoi(char *str);
long				operator_plus(int nbr1, int nbr2, long res_nbr);
long				operator_mine(int nbr1, int nbr2, long res_nbr);
long				operator_divid(int nbr1, int nbr2, long res_nbr);
long				operator_multi(int nbr1, int nbr2, long res_nbr);
long				operator_mod(int nbr1, int nbr2, long res_nbr);
void				ft_do_op(int nbr1, char *operator, int nbr2);

#endif
