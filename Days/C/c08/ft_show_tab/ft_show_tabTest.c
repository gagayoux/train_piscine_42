/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tabTest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:01:33 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 13:09:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"


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
	int i;
    int j;

	i = 0;
    j = 0;
	while (par[i].str[0] != '\0')
	{
		while(par[i].str[j] != '\0')
        {
            ft_putchar(par[i].str[j]);
            j++;
        }
        j = 0;
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        while(par[i].copy[j] != '\0')
        {
            ft_putchar(par[i].copy[j]);
            j++;
        }
        ft_putchar('\n');
        j = 0;
        i++;
	}
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *str_struct;
    int         count;
    int         i;
    int         j;
    int         k;

    str_struct = (t_stock_str*)malloc(sizeof(t_stock_str) * ((ac - 1) + 1));
	str_struct[ac - 1].str = (char*)malloc(sizeof(char) * 1);
	str_struct[ac - 1].copy = (char*)malloc(sizeof(char) * 1);
	str_struct[ac - 1].size = 1;
	str_struct[ac - 1].str[0] = '\0';
	str_struct[ac - 1].copy[0] = '\0';
    if (str_struct == NULL)
        return (NULL);
    count = 0;
    i = 0;
    j = 0;
    k = 1;
    while (count < (ac - 1))
    {
        while (av[k][j] != '\0')
            j++;
        str_struct[i].size = j;
        str_struct[i].str = (char*)malloc(sizeof(char) * (j + 1));
        str_struct[i].copy = (char*)malloc(sizeof(char) * (j + 1));
        j = 0;
        str_struct[i].str[j] = '\0';
        str_struct[i].copy[j] = '\0';
        while (av[k][j] != '\0')
        {
            str_struct[i].str[j] = av[k][j];
            j++;
        }
        j = 0;
        while (str_struct[i].str[j] != '\0')
        {
            str_struct[i].copy[j] = str_struct[i].str[j];
            j++;
        }
        j = 0;
        i++;
        k++;
        count++;
    }
	ft_show_tab(str_struct);
    return (str_struct);
}

int main(int ac, char **av)
{
    ft_strs_to_tab(ac, av);
    return (0);
}
