/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:42:46 by root              #+#    #+#             */
/*   Updated: 2020/04/27 16:17:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str)
{
    int size;
    size = 0;
    while(str[size] != '\0')
        size++;
    printf("%d", size);
    return(size);
}

int main(void)
{
    char *str;
    str = "Bonjour";
    ft_strlen(str);
    return(0);
}