/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpyTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:38:30 by root              #+#    #+#             */
/*   Updated: 2020/04/30 14:02:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcpy(char *str, char *src, unsigned int size)
{
    int i;

    i = 0;
    while(src[i] != '\0' && ((size - 1) > 0))
    {
        str[i] = src[i];
        i++;
        size--;
    }
    str[i] = '\0';
    return str;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int lenght;

    lenght = 0;
    
    while(src[lenght] != '\0')
        lenght++;

    ft_strcpy(dest, src, size);
    printf("%d\n", lenght);
    printf("%s", dest);
    return lenght;
}

int main(void)
{
    char dest[] = "dkeokdoek";
    char src[] = "Coucou";
    unsigned int size;
    size = 3;
    ft_strlcpy(dest, src, size);
    return(0);
}