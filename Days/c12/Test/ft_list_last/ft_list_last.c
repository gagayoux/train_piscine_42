/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:06:39 by user42            #+#    #+#             */
/*   Updated: 2020/06/26 18:10:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	if (begin_list == NULL)
		return (begin_list);
	else
	{
		temp = begin_list;
		while (temp != NULL)
			temp = temp->next;
	}
	return (temp);
}