/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacciTest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:32:18 by root              #+#    #+#             */
/*   Updated: 2020/05/02 16:49:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_fibonacci(int index)
{
    int result;
    
    if(index < 0)
        return(-1);
    if(index == 0)
        return(0);
    if(index == 1 || index == 2)
        return(1);
    result = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    return(result);
}

int main(void)
{
    printf("%d\n", ft_fibonacci(-5));
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(1));
    printf("%d\n", ft_fibonacci(5));
    return(0);
}