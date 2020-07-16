/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:01:12 by user42            #+#    #+#             */
/*   Updated: 2020/07/01 18:27:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = (t_list*)malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->next = NULL;
		list->data = data;
	}
	return (list);
}
