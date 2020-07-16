/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:35:48 by user42            #+#    #+#             */
/*   Updated: 2020/06/26 18:02:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	int i;

	i = 0;
	if (begin_list == NULL)
		begin_list[i] = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = begin_list[i];
		begin_list[i] = tmp;
	}
	
}
