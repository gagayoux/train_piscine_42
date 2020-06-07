/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combTest.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:22:09 by root              #+#    #+#             */
/*   Updated: 2020/04/24 13:05:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{

    int i;
    int j;
    int k;

    i = 48;
    j = 49;
    k = 50;

    while (i < 57)
    {
    while (j <= 57)
    {
    while(k <= 57)
    {
        if ((k > j) && (k > i) && (j > i))
        {
        ft_putchar(i);
        ft_putchar(j);
        ft_putchar(k);
        if (i < 55)
        {
        ft_putchar(',');
        ft_putchar(' ');
        }
        }
    k++;
    }
    k = 48;
    j++;
    }
    j = 48;
    i++;
    }
}

int main(void)
{
    ft_print_comb();
    return(0);
}