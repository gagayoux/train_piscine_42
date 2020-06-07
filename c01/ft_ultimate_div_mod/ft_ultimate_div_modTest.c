/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_modTest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:18:59 by root              #+#    #+#             */
/*   Updated: 2020/04/27 13:27:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void    ft_div_mod(int *a, int *b)
{
    int resultdiv;
    int resultmod;

    resultdiv = *a / *b;
    resultmod = *a % *b;
    a = &resultdiv;
    b = &resultmod;
    ft_putnbr(*a);
    ft_putchar('\n');
    ft_putnbr(*b);
}

int main(void)
{
    int *a;
    int *b;
    int a1;
    int b1;
    a1 = 11;
    b1 = 2;
    a = &a1;
    b = &b1;
    ft_div_mod(a, b);
    return(0);
}