/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:10:47 by user42            #+#    #+#             */
/*   Updated: 2020/06/26 18:17:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;
	int i;

	i = 0;
	temp = malloc(sizeof(t_list));
	if (begin_list[i] == NULL)
	{
		begin_list[i] = ft_create_elem(data);
		begin_list[i]->data = data;
		begin_list[i]->next = NULL;
		return (begin_list);
	}
	else
	{
		temp = begin_list[i];
		i = 1;
		while (temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		begin_list[i]->next = temp;
		temp->data = data;
		temp->next = NULL;
	}
	return (temp);
}