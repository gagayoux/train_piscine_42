/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:16:19 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 19:40:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_cc(int data1, int data2)
{
	if (data1 > data2)
		return (1);
	return (0);
}

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


	printf("%d\n", (*begin_list1)->data);
	printf("%d\n", (*begin_list1)->next->data);
	printf("%d\n", (*begin_list1)->next->next->data);
	printf("%d\n", (*begin_list1)->next->next->next->data);
	printf("%d\n", (*begin_list1)->next->next->next->next->data);
	printf("%d\n", (*begin_list1)->next->next->next->next->next->data);
}

int main(void)
{
	t_list *begin_list1;
	t_list *begin_list2;

	begin_list1 = (t_list*)malloc(sizeof(t_list));
	begin_list1->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->data = 42;
	begin_list1->next->data = 21;
	begin_list1->next->next->data = 2;
	begin_list1->next->next->next = NULL;

	begin_list2 = (t_list*)malloc(sizeof(t_list));
	begin_list2->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->data = 10;
	begin_list2->next->data = 5;
	begin_list2->next->next->data = 1;
	begin_list2->next->next->next = NULL;
	ft_sorted_list_merge(&begin_list1, begin_list2, &ft_cc);
	ft_list_clear(begin_list1);
	ft_list_clear(begin_list2);
	return (0);
}
