/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:50:39 by user42            #+#    #+#             */
/*   Updated: 2020/07/06 19:01:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_check_base(char *base)
{
	int len;
	int i;
	int j;

	len = 0;
	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if(base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long nbr_l;
	char nbr_c[32];
	int base_divider;
	int i;

	nbr_c[9] = 'a';
	if (ft_check_base(base) == 1)
	{
		base_divider = ft_strlen(base);
		if (nbr < 0)
		{
			nbr_l = nbr;
			nbr_l = nbr_l * -1;
			ft_putchar('-');
		}
		else
			nbr_l = nbr;
		i = 0;
		while (nbr_l > 0)
		{
			nbr_c[i] = base[nbr_l % base_divider];
			nbr_l = nbr_l / base_divider;
			i++;
		}
		printf("\n\n%d\n\n", i);
		while (i >= 0)
		{
			ft_putchar(nbr_c[i]);
			i--;
		}	
	}
}

int main(void)
{
	ft_putnbr_base(-324, "01");
	return (0);
}