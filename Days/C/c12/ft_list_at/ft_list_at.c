/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:24:15 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 14:54:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *tmp;

	tmp = NULL;
	if (begin_list != NULL)
	{
		tmp = begin_list;
		while (nbr > 1)
		{
			tmp = tmp->next;
			nbr--;
		}
		return (tmp);
	}
	return (tmp);
}
