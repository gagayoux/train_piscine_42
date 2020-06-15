/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combnTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 15:12:32 by root              #+#    #+#             */
/*   Updated: 2020/06/15 10:15:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int tab[n];
	int i;
	int k;

	i = 0;
	k = 0;
	if ((n < 1) || (n > 9))
		return ;
	if (n == 1)
		while (i < 10)
		{
			ft_putchar(i++ + '0');
			if (i < 10)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	while (i < n)
	{
		tab[i] = i;
		printf("%d", tab[i]);
		i++;
	}
	
}

int main(void)
{
	int n;

	n = 1;
	ft_print_combn(n);
	return(0);
}