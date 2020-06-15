/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:22:09 by root              #+#    #+#             */
/*   Updated: 2020/05/12 02:01:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i < 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 49;
	k = 50;
	while (i < 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				if ((k > j) && (k > i) && (j > i))
					print(i, j, k);
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
}
