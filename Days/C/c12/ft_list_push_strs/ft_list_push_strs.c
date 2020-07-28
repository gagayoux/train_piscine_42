/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:19:11 by user42            #+#    #+#             */
/*   Updated: 2020/07/02 11:35:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_strs(int size, char **strs)
{
	t_list *list;
	t_list *tmp;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		list = ft_create_elem((void*)strs[i]);
		if (i != 0)
			list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}

int main(void)
{
	t_list *ret;
	int i;
	char *strs[4];
	char **chineur;
	int size;

	i = 0;
	strs[0] = "Bonjour";
	strs[1] = "Salut";
	strs[2] = "Coucou";
	strs[3] = "Hello";
	size = 4;
	chineur = strs;
	ret = ft_list_push_strs(size, chineur);
	while (ret != NULL)
	{
		printf("%s\n", (char*)ret->data);
		ret = ret->next;
	}
	return (0);
}