/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercaseTest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:13:33 by root              #+#    #+#             */
/*   Updated: 2020/04/29 15:16:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < 65 || str[i] > 90)
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
    char str[] = "SKOKDO";
    ft_str_is_uppercase(str);
    return(0);
}