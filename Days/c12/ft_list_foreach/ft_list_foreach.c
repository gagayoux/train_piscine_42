/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 12:23:35 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 12:29:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (list_ptr != NULL)
	{
		while (list_ptr != NULL)
		{
			(*f)(list_ptr->data);
			list_ptr = list_ptr->next;
		}
	}
}