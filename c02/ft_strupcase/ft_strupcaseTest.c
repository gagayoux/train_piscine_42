/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcaseTest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:24:37 by root              #+#    #+#             */
/*   Updated: 2020/04/30 12:41:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
            i++;
        }
        else
            i++;
    }
    printf("%s", str);
    return str;
}

int main(void)
{
    char str[] = "cccc4c54545cc5cccDDDD5DDD";
    ft_strupcase(str);
    return(0);
}