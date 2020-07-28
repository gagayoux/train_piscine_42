/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_baseTestcopy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:20:11 by user42            #+#    #+#             */
/*   Updated: 2020/07/20 17:47:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

	// last_index = display(number, base_to, result,							
	// 	get_number_length(number, base_to) - 1);

int		display(int nb, char *str, char *result, int index)
{
	unsigned int	nbr;
	unsigned int	str_length;

	str_length = 0;
	while (str[str_length])										// On fait un len de la "char *base_to"
		str_length++;
	if (nb < 0)
	{
		result[index++] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		display(nbr / str_length, str, result, index - 1);
	result[index] = str[nbr % str_length];
	return (index);
}

int		get_number_length(int number, char *base_to)
{
	int	length;
	int	base_length;

	base_length = 0;
	while (base_to[base_length])
		base_length++;
	length = 0;
	while (number >= base_length)
	{
		++length;
		number /= base_length;
	}
	printf("cccc : %d\n", length);
	return (++length);
}

int		get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int	s;
	int	i;
	int	res;
	int	negative;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		++base_length;
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || str[s] == '\t' || str[s] == '\r'
				|| str[s] == '\n' || str[s] == '\v' || str[s] == '\f'))
		s++;
	i = s - 1;
	res = 0;
	negative = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s) ||
				(str[i] != '-' && str[i] != '+')))
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
			res = (res * base_length) + (get_nb(str[i], base));
	return (res * negative);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	int				number;
	int				last_index;

	if (!nbr || !base_from || !base_to)
		return (0);
	number = ft_atoi_base(nbr, base_from);									// On commence par recuperer le nbr en int en base 10 avec atoi_base
	result = malloc(sizeof(char) * get_number_length(number, base_to));		// On malloc la taille requise pour faire rentrer le nbr final dans un char*
	last_index = display(number, base_to, result,							
		get_number_length(number, base_to) - 1);
	result[last_index + 1] = '\0';
	return (result);
}

int main(void)
{
	printf("%s\n", ft_convert_base("-3E", "0123456789ABCDEF", "01"));
	return 0;
}