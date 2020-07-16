/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:17:51 by user42            #+#    #+#             */
/*   Updated: 2020/06/26 18:04:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	if (begin_list == NULL)
		return (size);
	else
	{
		size = 1;
		while (begin_list != NULL)
		{
			begin_list = begin_list->next;
			size++;
		}
	}

	return (size);
}
