/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:55:49 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 11:43:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_static;
	t_list *keep;
	t_list *cpy;

	tmp_static = *begin_list;
	keep = *begin_list;
	while (tmp_static->next != NULL)
		tmp_static = tmp_static->next;
	*begin_list = (*begin_list)->next;
	tmp_static->next = keep;
	keep->next = NULL;
	while (*begin_list != tmp_static)
	{
		cpy = *begin_list;
		*begin_list = (*begin_list)->next;
		tmp_static->next = cpy;
		cpy->next = keep;
		keep = cpy;
		cpy = *begin_list;
	}
}

int main(void)
{
	t_list *begin_list;

	begin_list = (t_list*)malloc(sizeof(t_list));
	begin_list->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next->next = NULL;

	begin_list->nbr = 5;
	begin_list->next->nbr = 4;
	begin_list->next->next->nbr = 3;
	begin_list->next->next->next->nbr = 2;
	begin_list->next->next->next->next->nbr = 1;

	ft_list_reverse(&begin_list);
	ft_list_clear(begin_list);

	return (0);
}
