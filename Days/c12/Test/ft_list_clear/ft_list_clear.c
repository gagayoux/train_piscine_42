/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:36:09 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 14:31:53 by user42           ###   ########.fr       */
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
	printf("La liste est vide.");
	return (begin_list);
}

int main(void)
{
	t_list *begin_list;
	t_list *tmp;

	begin_list = (t_list*)malloc(sizeof(t_list));
	tmp = begin_list;
	begin_list->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next = (t_list*)malloc(sizeof(t_list));
	begin_list->next->next->next->next = NULL;

	begin_list->nbr = 5;
	begin_list->next->nbr = 10;
	begin_list->next->next->nbr = 21;
	begin_list->next->next->next->nbr = 42;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->nbr);
		tmp = tmp->next;
	}
	
	begin_list = ft_list_clear(begin_list);
	return (0);
}
