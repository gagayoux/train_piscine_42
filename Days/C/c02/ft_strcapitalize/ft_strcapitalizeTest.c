/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizeTest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:46:50 by root              #+#    #+#             */
/*   Updated: 2020/04/30 13:38:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
            i++;
        }
        else
            i++;
    }
}

char    *ft_strcapitalize(char *str)
{
    int i;

    ft_strlowcase(str);
    i = 0;
    if(str[i] >= 97 && str[i] <= 122)
        str[i] = str[i] -32;
    while(str[i] != '\0')
    {
        if((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) ||
            (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
        {
            if(str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }
    printf("%s", str);
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    return(0);
}