/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:24:15 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 14:53:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *tmp;

	tmp = NULL;
	if (begin_list != NULL)
	{
		tmp = begin_list;
		while (nbr > 1)
		{
			tmp = tmp->next;
			nbr--;
		}
		printf("%d\n", tmp->nbr);
		return (tmp);
	}
	return (tmp);
}

int main(void)
{
	t_list *begin_list;
	t_list *tmp;
	unsigned int nbr;

	nbr = 3;
	begin_list = (t_list*)malloc(sizeof(t_list));
	tmp = begin_list;
	begin_list->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next = NULL;

	begin_list->nbr = 1;
	begin_list->next->nbr = 21;
	begin_list->next->next->nbr = 42;
	begin_list->next->next->next->nbr = 4;
	
	ft_list_at(begin_list, nbr);
	ft_list_clear(begin_list);
	return (0);
}
