/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alphaTest.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 13:58:55 by root              #+#    #+#             */
/*   Updated: 2020/04/29 14:10:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >=97 && str[i] <= 122))
            i++;
        else
        {
            printf("0");
            return(0);
        }
    }
    printf("1");
    return(1);
}

int main(void)
{
    char str[] = "";
    ft_str_is_alpha(str);
    return(0);
}