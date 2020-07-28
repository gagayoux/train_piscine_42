/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:31:16 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 15:26:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_cc(int nbr)
{
	nbr = nbr + 1;
	return (nbr);
}

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
		printf("%d\n", result[i]);
		size++;
		i++;
	}
	return (result);
}

int main(void)
{
	int *tab;
	int length;

	tab = (int*)malloc(sizeof(int) * 10);
	length = 10;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	tab[7] = 8;
	tab[8] = 9;
	tab[9] = 10;
	tab = ft_map(tab, length, &ft_cc);
	return (0);
}