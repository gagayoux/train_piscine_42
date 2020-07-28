/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:49:12 by user42            #+#    #+#             */
/*   Updated: 2020/07/23 15:53:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int ac, char **av)
{
	long nbr1;
	long nbr2;

	if (ft_check_operateur(ac, av[ac - 2], av[ac - 1]) == 1 &&
		ft_atoi(av[ac - 3]) < 2147483648 &&
		ft_atoi(av[ac - 3]) > -2147483649 &&
		ft_atoi(av[ac - 1]) < 2147483648 &&
		ft_atoi(av[ac - 1]) > -2147483649)
	{
		nbr1 = ft_atoi(av[ac - 3]);
		nbr2 = ft_atoi(av[ac - 1]);
		ft_do_op(nbr1, av[ac - 2], nbr2);
		return (0);
	}
	return (0);
}
