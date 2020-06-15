/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpyTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 13:23:22 by root              #+#    #+#             */
/*   Updated: 2020/04/29 13:34:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    
    while(src[i] != '\0' && n > 0)
    {
        dest[i] = src[i];
        i++;
        n--;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
        n--;
    }
    dest[i] = '\0';
    printf("%s", dest);
    return dest;
}

int main(void)
{
    char dest[] = "dkoekodkeoe";
    char src[] = "Bonjour";
    unsigned int n;
    n = 10;
    ft_strncpy(dest, src, n);
    return(0);
}