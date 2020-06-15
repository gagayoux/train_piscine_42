/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_powerTest.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:14:45 by root              #+#    #+#             */
/*   Updated: 2020/05/02 16:20:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    i = 0;
    result = 1;

    if(power < 0)
        return(0);
    while(i < power)
    {
        result = result * nb;
        i++;
    }
    printf("%d", result);
    return(result);
}

int main(void)
{
    int nb;
    int power;
    nb = 3;
    power = 4;
    ft_iterative_power(nb, power);
    return(0);
}