/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:53:32 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 17:05:42 by user42           ###   ########.fr       */
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
	printf("%d", (*begin_list1)->nbr);
	printf("%d", (*begin_list1)->next->nbr);
	printf("%d", (*begin_list1)->next->next->nbr);
	printf("%d", (*begin_list1)->next->next->next->nbr);
	printf("%d", (*begin_list1)->next->next->next->next->nbr);
	printf("%d", (*begin_list1)->next->next->next->next->next->nbr);
	printf("%d", (*begin_list1)->next->next->next->next->next->next->nbr);
	printf("%d", (*begin_list1)->next->next->next->next->next->next->next->nbr);
}

int main(void)
{
	t_list *begin_list1;
    t_list *begin_list2;

	begin_list1 = (t_list*)malloc(sizeof(t_list));
	begin_list1->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list1->next->next->next->next = NULL;
    begin_list2 = (t_list*)malloc(sizeof(t_list));
	begin_list2->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list2->next->next->next->next = NULL;
	begin_list1->nbr = 1;
	begin_list1->next->nbr = 2;
	begin_list1->next->next->nbr = 3;
	begin_list1->next->next->next->nbr = 4;
	begin_list2->nbr = 5;
	begin_list2->next->nbr = 6;
	begin_list2->next->next->nbr = 7;
	begin_list2->next->next->next->nbr = 8;
	ft_list_merge(&begin_list1, begin_list2);
	ft_list_clear(begin_list1);
	ft_list_clear(begin_list2);
	return (0);    
}