/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printableTest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:18:33 by root              #+#    #+#             */
/*   Updated: 2020/04/29 15:23:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 0 && str[i] < 32) || (str[i] == 127))
        {
            printf("0");
            return(0);
        }
        i++;
    }
    printf("1");
    return(1);
}

int main(void)
{
    char str[] = "";
    ft_str_is_printable(str);
    return(0);
}