/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tabTest.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 13:44:58 by root              #+#    #+#             */
/*   Updated: 2020/05/10 04:55:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void    ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int count;

    count = 0;
    while(count < (size -1))
    {
        if(tab[count] > tab[count + 1])
        {
            swap = tab[count];
            tab[count] = tab[count + 1];
            tab[count + 1] = swap;
            count = 0;
        }
        else
        count++;
    }
    ft_putnbr(tab[0]);
    ft_putnbr(tab[1]);
    ft_putnbr(tab[2]);
    ft_putnbr(tab[3]);
    ft_putnbr(tab[4]);
}

int main(void)
{
    int tab[5];
    int size;
    size = 5;
    tab[0] = 4;
    tab[1] = 6;
    tab[2] = 2;
    tab[3] = 5;
    tab[4] = 1;
    ft_sort_int_tab(tab, size);
    return(0);
}