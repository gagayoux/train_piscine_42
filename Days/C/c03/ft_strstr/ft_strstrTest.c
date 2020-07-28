/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:22:03 by root              #+#    #+#             */
/*   Updated: 2020/05/01 14:42:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = &to_find[0];

    while(str[i] != '\0')
    {
        if(to_find[j] == str[i])
        {
            printf("ok");
            return(ptr);
        }
        i++;
    }
    printf("pas ok");
    return;
}

int main(void)
{
    char str[] = "Bonjour";
    char to_find[] = "p";
    ft_strstr(str, to_find);
    return(0);
}