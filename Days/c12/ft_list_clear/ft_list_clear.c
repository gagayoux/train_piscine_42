/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:36:09 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 14:20:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	if (begin_list != NULL)
	{
		while (begin_list != NULL)
		{
			tmp = begin_list->next;
			free_fct(begin_list->data);
			free(begin_list);
			begin_list = tmp;
		}
	}
}
