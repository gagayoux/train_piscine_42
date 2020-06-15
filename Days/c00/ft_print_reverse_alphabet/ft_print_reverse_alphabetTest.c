/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabetTest.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:01:34 by root              #+#    #+#             */
/*   Updated: 2020/04/23 18:11:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    int i;
    i = 122;
    while (i > 98)
    {
        ft_putchar(i);
        i--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}