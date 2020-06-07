/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbersTest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:01:34 by root              #+#    #+#             */
/*   Updated: 2020/04/23 18:14:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int i;
    i = 48;
    while (i < 58)
    {
        ft_putchar(i);
        i++;
    }
}

int main(void)
{
    ft_print_numbers();
    return(0);
}