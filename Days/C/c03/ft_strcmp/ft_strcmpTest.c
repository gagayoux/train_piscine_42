/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:18:12 by root              #+#    #+#             */
/*   Updated: 2020/05/01 13:44:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;

    while(s1[i] != '\0' || s2[i] != '\0')
    {
        if(s1[i] < s2[i])
        {
            printf("-1");
            return(-1);
        }
        if(s1[i] > s2[i])
        {
            printf("1");
            return(1);
        }
        i++;
    }
    printf("0");
    return(0);
}

int main(void)
{
    char s1[] = "Bonjour";
    char s2[] = "55546";
    ft_strcmp(s1, s2);
    return(0);
}