/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:21:00 by root              #+#    #+#             */
/*   Updated: 2020/05/05 18:50:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;

    if (nb == 0)
        return(0);
    while(i * i < nb)
        i++;
    if((nb % i) == 0)
        return(i);
    else
        return(0);
}

int main(void)
{
    printf("%d", ft_sqrt(9));
    return(0);
}