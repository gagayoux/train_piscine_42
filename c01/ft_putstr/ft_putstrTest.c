/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:28:21 by root              #+#    #+#             */
/*   Updated: 2020/04/27 13:42:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int size;
    int i;
    i = 0;

    while(str[i] != '\0')
        i++;
    size = i;
    i = 0;
    while(i < size)
    {
    ft_putchar(str[i]);
    i++;
    }
}

int main(void)
{
    char *str;
    str = "Bonjour, ca va toi, tes vraiment trop beau !";
    ft_putstr(str);
    return(0);
}