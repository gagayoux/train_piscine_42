/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:24:42 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 18:50:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *tmp;
	t_list *tmp2;
	t_list *tmp_keep;

	tmp = begin_list;
	tmp2 = tmp;
	if (begin_list != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp_keep = tmp;
		while (tmp != begin_list)
		{
			while (tmp2->next != tmp)
				tmp2 = tmp2->next;
			tmp->next = tmp2;
			tmp = tmp2;
			tmp2 = begin_list;
		}
		tmp->next = NULL;
		begin_list = tmp_keep;
	}



	printf("%d\n", begin_list->data);
	printf("%d\n", begin_list->next->data);
	printf("%d\n", begin_list->next->next->data);
	printf("%d\n", begin_list->next->next->next->data);
	printf("%d\n", begin_list->next->next->next->next->data);
	printf("%d\n", begin_list->next->next->next->next->next->data);
}

int main(void)
{
	t_list *begin_list;

	begin_list = (t_list*)malloc(sizeof(t_list));
	begin_list->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next->next->next = NULL;
	begin_list->data = 42;
	begin_list->next->data = 21;
	begin_list->next->next->data = 10;
	begin_list->next->next->next->data = 5;
	begin_list->next->next->next->next->data = 2;
	begin_list->next->next->next->next->next->data = 1;
	ft_list_reverse_fun(begin_list);
	ft_list_clear(begin_list);
	return (0);
}
