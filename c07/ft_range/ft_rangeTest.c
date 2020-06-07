/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangeTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:41:45 by user42            #+#    #+#             */
/*   Updated: 2020/05/22 12:11:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;

    i = min;
    if (min > max)
        return (NULL);
    tab = (int*)malloc(sizeof(*tab) * (max - min));
    while (min < max)
    {
        tab[i] = min;
        min++;
        printf("%d", tab[i]);
    }
    return (tab);
}

int main(void)
{
    int min;
    int max;

    min = 10;
    max = 9;
    ft_range(min, max);
    return(0);
}