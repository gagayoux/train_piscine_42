/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:53:48 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 19:15:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_cc(int data1, int data2)
{
	if (data1 > data2)
		return (1);
	return (0);
}

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
	printf("%d\n", (*begin_list)->data);
	printf("%d\n", (*begin_list)->next->data);
	printf("%d\n", (*begin_list)->next->next->data);
	printf("%d\n", (*begin_list)->next->next->next->data);
	printf("%d\n", (*begin_list)->next->next->next->next->data);
	printf("%d\n", (*begin_list)->next->next->next->next->next->data);
}

int main(void)
{
	t_list *begin_list;
	void *data = NULL;

	begin_list = (t_list*)malloc(sizeof(t_list));
	begin_list->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next->next = NULL;
	begin_list->data = 42;
	begin_list->next->data = 21;
	begin_list->next->next->data = 5;
	begin_list->next->next->next->data = 2;
	begin_list->next->next->next->next->data = 1;
	ft_sorted_list_insert(&begin_list, data, &ft_cc);
	ft_list_clear(begin_list);
	return (0);
}
