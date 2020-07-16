/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 17:08:19 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 18:23:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_cc(int data1, int data2)
{
	if (data1 > data2)
		return (1);
	return (0);
}

void	ft_set_first_node(t_list **begin_list, t_list *current_tmp,
	t_list *other_list_ptr, int i)
{
	if (i == 0)
		(*begin_list) = other_list_ptr;
	else
		current_tmp->next = other_list_ptr;
}

void	ft_swap_list(t_list *list_ptr, t_list *other_list_ptr)
{
	t_list *next_tmp;

	next_tmp = other_list_ptr->next;
	other_list_ptr->next = list_ptr;
	list_ptr->next = next_tmp;
}

void	ft_list_move(t_list **list_ptr, t_list **other_list_ptr,
	t_list **current_tmp, int *i)
{
	*current_tmp = *list_ptr;
	*list_ptr = (*list_ptr)->next;
	*other_list_ptr = (*other_list_ptr)->next;
	(*i) += 1;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*current_tmp;
	t_list		*list_ptr;
	t_list		*other_list_ptr;
	int			i;

	i = 0;
	current_tmp = NULL;
	list_ptr = (*begin_list);
	other_list_ptr = list_ptr->next;
	if (*begin_list != NULL)
		while (other_list_ptr != NULL)
		{
			if ((*cmp)(list_ptr->data, other_list_ptr->data) > 0)
			{
				ft_swap_list(list_ptr, other_list_ptr);
				ft_set_first_node(begin_list, current_tmp, other_list_ptr, i);
				i = 0;
				list_ptr = (*begin_list);
				other_list_ptr = list_ptr->next;
			}
			else
				ft_list_move(&list_ptr, &other_list_ptr, &current_tmp, &i);
		}
}
