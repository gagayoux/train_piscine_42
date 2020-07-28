/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 13:09:13 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 13:11:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		ft_putnbr(nb);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].str[0] != '\0')
	{
		while (par[i].str[j] != '\0')
		{
			ft_putchar(par[i].str[j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		while (par[i].copy[j] != '\0')
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
