/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:54:25 by user42            #+#    #+#             */
/*   Updated: 2020/07/06 11:08:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int ac, char **av)
{
	if (ft_check_input(ac, av[ac - 1]) == 1)
	{
		ft_tab_init(av[ac - 1]);
		return (0);
	}
	return (0);
}