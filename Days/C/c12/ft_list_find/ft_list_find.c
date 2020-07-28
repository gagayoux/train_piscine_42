/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 12:32:44 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 12:36:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (list_ptr != NULL)
	{
		while (list_ptr != NULL)
		{
			data_ref = list_ptr->data;
			if ((*cmp)(list_ptr->data, data_ref) == 0)
				return (list_ptr);
			list_ptr = list_ptr->next;
		}
	}
	return (list_ptr);
}
