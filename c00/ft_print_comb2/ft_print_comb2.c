/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 14:00:19 by root              #+#    #+#             */
/*   Updated: 2020/05/12 02:05:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48;
	j = 48;
	k = 48;
	l = 49;
	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				while (l <= 57)
				{
					if ((j < l) && (i <= l) && (i <= k))
					{
						ft_putchar(i);
						ft_putchar(j);
						ft_putchar(' ');
						ft_putchar(k);
						ft_putchar(l);
						ft_putchar(',');
						ft_putchar(' ');
					}
					l++;
				}
				k++;
				l = 48;
			}
			j++;
			k = 48;
		}
		i++;
		j = 48;
	}
}
