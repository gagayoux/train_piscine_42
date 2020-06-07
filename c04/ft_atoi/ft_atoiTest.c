/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 21:58:38 by user42            #+#    #+#             */
/*   Updated: 2020/06/03 22:23:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
    if(nb >= 0 && nb < 10)
        ft_putchar(nb + 48);
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
        ft_putnbr(nb);
    }
    if(nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));
    }
}

int	ft_atoi(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] = '')
	}
}

int main(void)
{
	char *str = "   ---+--+1234ab567";
	printf("\n%d\n", ft_atoi(str));
}