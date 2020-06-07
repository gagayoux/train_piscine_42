/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorialTest.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:29:31 by root              #+#    #+#             */
/*   Updated: 2020/05/01 17:50:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    
    if(nb < 0)
    {
        printf("0");
        return(0);
    }
    if(nb == 0 || nb == 1)
    {
        printf("1");
        return(1);
    }
    while(i <= nb)
    {
        result = result * i;
        i++;
    }
    printf("%d", result);
    return nb;
}

int main(void)
{
    int nb;
    nb = -55;
    ft_iterative_factorial(nb);
    return(0);
}