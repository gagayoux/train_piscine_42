/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorialTest.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:29:31 by root              #+#    #+#             */
/*   Updated: 2020/05/02 16:13:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    int value;

    if(nb < 0)
        return(0);
    if(nb == 0 || nb == 1)
        return(1);

    value = nb;
    return(value * ft_recursive_factorial(nb - 1));
}

int main(void)
{
    printf("%d", ft_recursive_factorial(2));
    return(0);
}