/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tabTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 17:57:20 by user42            #+#    #+#             */
/*   Updated: 2020/07/13 12:08:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *str_struct;
    int         count;
    int         i;
    int         j;
    int         k;

    str_struct = (t_stock_str*)malloc(sizeof(t_stock_str) * ((ac - 1) + 1));
    if (str_struct == NULL)
        return (NULL);
    count = 0;
    i = 0;
    j = 0;
    k = 1;
    while (count < (ac - 1))
    {
        while (av[k][j] != '\0')
            j++;
        str_struct[i].size = j;
        str_struct[i].str = (char*)malloc(sizeof(char) * (j + 1));
        str_struct[i].copy = (char*)malloc(sizeof(char) * (j + 1));
        j = 0;
        str_struct[i].str[j] = '\0';
        str_struct[i].copy[j] = '\0';
        while (av[k][j] != '\0')
        {
            str_struct[i].str[j] = av[k][j];
            j++;
        }
        j = 0;
        while (str_struct[i].str[j] != '\0')
        {
            str_struct[i].copy[j] = str_struct[i].str[j];
            j++;
        }
        j = 0;
        i++;
        k++;
        count++;
    }
    return (str_struct);
    
}

int main(int ac, char **av)
{
    ft_strs_to_tab(ac, av);
    return (0);
}