/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 12:39:12 by root              #+#    #+#             */
/*   Updated: 2020/04/29 13:03:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return  dest;
}

int main(void)
{
    char dest[] = "doddddddddk";
    char src[] = "Bonjour";
    ft_strcpy(dest, src);
    printf("%s\n", src);
    printf("%s", dest);
    return(0);
}