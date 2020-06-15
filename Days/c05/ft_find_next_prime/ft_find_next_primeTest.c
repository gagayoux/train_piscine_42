/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_primeTest.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 19:12:57 by root              #+#    #+#             */
/*   Updated: 2020/05/05 19:24:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;

    if (nb <= 1)
        return(0);
    while(i <= nb / i)
    {
        if(nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int ft_find_next_prime(int nb)
{
    int i;
    int j;

    i = 2;
    j = nb;
    if (nb <= 1)
        return(0);
    while(ft_is_prime(j) == 0)
        j++;
    return(j);
}

int main(void)
{
    printf("%d", ft_find_next_prime(10));
    return(0);
}