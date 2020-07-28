/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_primeTest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:51:05 by root              #+#    #+#             */
/*   Updated: 2020/05/05 19:11:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;

    if(nb <= 1)
        return(0);
    while(i <= nb / i)
    {
        if(nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(void)
{
    printf("%d", ft_is_prime(19));
    return(0);
}