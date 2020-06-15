/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printableTest.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:48 by root              #+#    #+#             */
/*   Updated: 2020/06/10 15:36:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
	int i;
	char *hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char *str = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return(0);
}