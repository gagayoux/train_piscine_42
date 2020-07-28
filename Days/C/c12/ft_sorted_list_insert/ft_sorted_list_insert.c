/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:18:37 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 19:18:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *list_ptr;
	t_list *tmp;
	t_list *other_list_ptr;

	other_list_ptr = ft_create_elem(data);
	list_ptr = (*begin_list);
	tmp = list_ptr;
	if (list_ptr != NULL)
	{
		while ((*cmp)(list_ptr->data, other_list_ptr->data) > 0)
			list_ptr = list_ptr->next;
		while (tmp->next != list_ptr)
			tmp = tmp->next;
		tmp->next = other_list_ptr;
		other_list_ptr->next = list_ptr;
	}
}