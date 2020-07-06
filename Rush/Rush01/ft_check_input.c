/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:30:55 by user42            #+#    #+#             */
/*   Updated: 2020/07/04 20:09:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_check_input(int ac, char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '1' && str[i] > '4') || (ac != 2))
			return (0);
		if (str[i] >= '1' && str[i] <= '4')
		{
			count++;
			i++;
		}
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
			return (0);
		if (str[i++] == ' ')
			count++;
	}
	if (count != 31)
		return (0);
	return (1);
}
