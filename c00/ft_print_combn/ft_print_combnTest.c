/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combnTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 15:12:32 by root              #+#    #+#             */
/*   Updated: 2020/05/18 16:11:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];
	
	i = 0;
	while(tab[i] != '\0'])
	{
		tab[i + 1]++;
		i++;
	}

	
}

int main(void)
{
	int n;

	n = 5;
	ft_print_combn(n);
	return(0);
}