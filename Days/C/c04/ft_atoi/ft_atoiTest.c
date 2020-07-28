/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:16:25 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 18:10:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while (str[i] == 't' || str[i] == 'v' || str[i] == 'n' || str[i] == 'r' ||
	str[i] == 'f' || str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 == 1)
		neg = -1;
	else
		neg = 1;
	while (str[i] >= '1' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	printf("%d\n", res * neg);
	return (res * neg);
}

int main(void)
{
	ft_atoi("     --+--+-123ab456 ");
	return (0);
}
