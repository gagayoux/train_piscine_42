/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 13:56:37 by user42            #+#    #+#             */
/*   Updated: 2020/06/12 14:06:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"

int main(int argc, char **argv)
{
    int Value;
    Value = -155;
    (void)argv;
    printf("%d\n", ABS(Value));
    return (0);
}