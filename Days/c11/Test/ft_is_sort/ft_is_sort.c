/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:27:33 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 15:24:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_cc(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < length)
	{
		j = i + 1;
		if (f(tab[i], tab[j]) > 0)
		{
			printf("nop");
			return (0);
		}
			i++;
	}
	printf("ok");
	return (1);
}

int main(void)
{
	int *tab;
	int length;

	tab = (int*)malloc(sizeof(int) * 6);
	length = 6;
	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 5;
	tab[3] = 10;
	tab[4] = 21;
	tab[5] = 42;

	ft_is_sort(tab, length, &ft_cc);
	return (0);
}