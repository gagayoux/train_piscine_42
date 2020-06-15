/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:12:40 by root              #+#    #+#             */
/*   Updated: 2020/05/01 14:21:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = dest;

    while(dest[j] != '\0')
        j++;
    while(src[i] != '\0' && nb > 0)
    {
        dest[j] = src[i];
        i++;
        j++;
        nb--;
    }
    dest[j] = '\0';
    printf("%s", dest);
    return ptr;
}

int main(void)
{
    char src[] = "guapa";
    char dest[] = "Hola ";
    unsigned int nb;
    nb = 3;
    ft_strcat(dest, src, nb);
    return(0); 
}