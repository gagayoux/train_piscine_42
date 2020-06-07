/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercaseTest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:10:00 by root              #+#    #+#             */
/*   Updated: 2020/04/29 15:12:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_lowecase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < 97 || str[i] > 122)
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
    char str[] = "ffjrijfrifrj";
    ft_str_is_lowecase(str);
    return(0);
}