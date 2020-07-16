/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:55:49 by user42            #+#    #+#             */
/*   Updated: 2020/07/03 11:44:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp_static;
	t_list	*keep;
	t_list	*cpy;

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
