/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:31:16 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 10:51:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int size;
	int *result;

	i = 0;
	size = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (size < length)
	{
		result[i] = f(tab[i]);
		size++;
		i++;
	}
	return (result);
}