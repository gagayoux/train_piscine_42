/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimage_rangeTest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:58:18 by user42            #+#    #+#             */
/*   Updated: 2020/07/15 12:32:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int*)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (max - min);
}

int main(void)
{
	int *range; 
	int min;
	int max;
	int i;

	i = 0;
	max = 100;
	min = -5;
	ft_ultimate_range(&range, min, max);
	while (min < max)
	{
		printf("%d\n", range[i]);
		i++;
		min++;
	}
	return (0);
}