/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_powerTest.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:21:39 by root              #+#    #+#             */
/*   Updated: 2020/05/02 16:30:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    if(power < 0)
        return(0);
    if(power == 0)
    return(1);
    else
        result = nb * ft_recursive_power(nb, power -1);
    return(result);
}

int main(void)
{
    printf("%d", ft_recursive_power(3, 4));
    return(0);
}