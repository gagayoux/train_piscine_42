/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:54:22 by root              #+#    #+#             */
/*   Updated: 2020/05/01 14:19:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = dest;

    while(dest[j] != '\0')
        j++;
    while(src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    printf("%s", dest);
    return ptr;
}

int main(void)
{
    char src[] = "guapa";
    char dest[] = "Hola ";
    ft_strcat(dest, src);
    return(0); 
}