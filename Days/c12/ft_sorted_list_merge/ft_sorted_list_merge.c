/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:16:19 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 19:41:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
	t_list *begin_list2, int (*cmp)())
{
	t_list *list_ptr;
	t_list *other_list_ptr;
	t_list *tmp;

	list_ptr = (*begin_list1);
	other_list_ptr = begin_list2;
	tmp = list_ptr;
	if ((*begin_list1) != NULL && begin_list2 != NULL)
	{
		while ((*cmp)(list_ptr->data, other_list_ptr->data) > 0)
			list_ptr = list_ptr->next;
		while (tmp->next != list_ptr)
			tmp = tmp->next;
		while (other_list_ptr->next != NULL)
		{
			tmp->next = other_list_ptr;
			tmp = other_list_ptr;
			other_list_ptr = other_list_ptr->next;
		}
		other_list_ptr->next = list_ptr;
	}
}