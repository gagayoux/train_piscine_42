/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:36:09 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 16:25:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_clear(t_list *begin_list)
{
	t_list *tmp;

	if (begin_list != NULL)
	{
		while (begin_list != NULL)
		{
			tmp = begin_list->next;
			free(begin_list->data);
			free(begin_list);
			begin_list = tmp;
		}
	}
	return (begin_list);
}
