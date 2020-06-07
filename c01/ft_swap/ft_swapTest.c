/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:04:59 by root              #+#    #+#             */
/*   Updated: 2020/04/27 13:09:37 by root             ###   ########.fr       */
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

void    ft_swap(int *a, int *b)
{
    int *temp;
    int a1;
    int b2;
    a1 = 0;
    b2 = 42;
    a = &a1;
    b = &b2;
    ft_putnbr(*a);
    ft_putchar('\n');
    ft_putnbr(*b);
    temp = a;
    a = b;
    b = temp;
    ft_putchar('\n');
    ft_putnbr(*a);
    ft_putchar('\n');
    ft_putnbr(*b);
}

int main(void)
{
    int *a;
    int *b;
    ft_swap(a, b);
    return(0);
}