/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numericTest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:04:44 by root              #+#    #+#             */
/*   Updated: 2020/04/29 15:09:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < 48 || str[i] > 57)
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
    char str[] = "451515";
    ft_str_is_numeric(str);
    return(0);
}