/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 12:26:33 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 13:01:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*dataref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (list_ptr != NULL)
	{
		while (list_ptr != NULL)
		{
			dataref = list_ptr->data;
			if ((*cmp)(list_ptr->data), data_ref == 0)
				(*f)(list_ptr->data);
			list_ptr = list_ptr->next;
		}
	}
}
