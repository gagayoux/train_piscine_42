/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_modTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:05:20 by root              #+#    #+#             */
/*   Updated: 2020/04/27 13:18:44 by root             ###   ########.fr       */
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

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    a = 15;
    b = 2;

    int resultdiv;
    int resultmod;

    resultdiv = a / b;
    resultmod = a % b;
    div = &resultdiv;
    mod = &resultmod;
    ft_putnbr(*div);
    ft_putchar('\n');
    ft_putnbr(*mod);
}

int main(void)
{
    int a;
    int b;
    int *div;
    int *mod;
    ft_div_mod(a, b, div, mod);
    return(0);
}