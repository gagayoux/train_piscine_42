/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tabTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:50:28 by root              #+#    #+#             */
/*   Updated: 2020/04/28 13:44:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
    if(nb >= 0 && nb < 10)
        ft_putchar(nb + 48);
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
        ft_putnbr(nb);
    }
    if(nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));
    }
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;
    i = 0;
    j = size -1;
    while(i < (size / 2))
    {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
    ft_putnbr(tab[0]);
    ft_putnbr(tab[1]);
    ft_putnbr(tab[2]);
    ft_putnbr(tab[3]);
    ft_putnbr(tab[4]);
    ft_putnbr(tab[5]);
}

int main(void)
{
    int tab[6];
    int size;
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    tab[4] = 4;
    tab[5] = 5;
    size = 6;
    ft_rev_int_tab(tab, size);
    return(0);
}