/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabetTest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:01:34 by root              #+#    #+#             */
/*   Updated: 2020/04/23 18:08:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    int i;
    i = 97;
    while (i < 123)
    {
        ft_putchar(i);
        i++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return(0);
}