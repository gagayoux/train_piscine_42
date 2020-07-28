/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativeTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:15:45 by root              #+#    #+#             */
/*   Updated: 2020/04/23 18:21:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    char N;
    char P;
    N = 'N';
    P = 'P';
    if (n < 0)
    ft_putchar(N);
    if (n >= 0)
    ft_putchar(P);
}

int main(void)
{
    int n;
    n = -5;
    ft_is_negative(n);
    return(0);
}