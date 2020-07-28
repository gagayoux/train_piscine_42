/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:53:32 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 17:07:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*ptr_list1;
	t_list	*ptr_list2;
	t_list	*tmp;

	ptr_list1 = *begin_list1;
	ptr_list2 = begin_list2;
	tmp = ptr_list1;
	if (*begin_list1 != NULL && begin_list2 != NULL)
	{
		while (ptr_list1 != NULL)
			ptr_list1 = ptr_list1->next;
		while (tmp->next != ptr_list1)
			tmp = tmp->next;
		tmp->next = ptr_list2;
	}
}
