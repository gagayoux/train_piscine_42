/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 12:37:44 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 16:52:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*movewhile_cmp_true(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*blist;
	t_list	*alist;

	list_ptr = *begin_list;
	alist = *begin_list;
	while ((*cmp)(list_ptr->data, data_ref) == 0)
	{
		alist = list_ptr->next;
		(free_fct)(list_ptr->data);
		free(list_ptr);
		list_ptr = alist;
	}
	return (begin_list);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*blist;
	t_list	*alist;

	*begin_list = move_while_cmp_true(begin_list, data_ref, cmp, free_fct);
	list_ptr = *begin_list;
	blist = list_ptr;
	alist = list_ptr->next;
	if (list_ptr != NULL)
	{
		while (list_ptr != NULL)
		{
			blist = list_ptr;
			list_ptr = list_ptr->next;
			if (alist != NULL)
				alist = alist->next;
			if ((*cmp)(list_ptr->data, data_ref) == 0)
			{
				blist->next = alist;
				(free_fct)(list_ptr->data);
				free(list_ptr);
				list_ptr = blist;
			}
		}
	}
}
