/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:07:10 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 15:25:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_cc(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'p')
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count += 1;
		i++;
	}
	printf("%d\n", count);
	return (count);
}

int main(void)
{
	char **tab;
	int length;

	length = 3;
	tab = (char**)malloc(sizeof(char*) * 3);
	tab[0] = (char*)malloc(sizeof(char) * 6);
	tab[1] = (char*)malloc(sizeof(char) * 7);
	tab[2] = (char*)malloc(sizeof(char) * 3);
	tab[0][0] = 'S';
	tab[0][1] = 'o';
	tab[0][2] = 'o';
	tab[0][3] = 'u';
	tab[0][4] = 'o';
	tab[0][5] = '\0';
	tab[1][0] = 'C';
	tab[1][1] = 'o';
	tab[1][2] = 'p';
	tab[1][3] = 'c';
	tab[1][4] = 'o';
	tab[1][5] = 'o';
	tab[1][6] = '\0';
	tab[2][0] = 'o';
	tab[2][1] = 'p';
	tab[2][2] = '\0';
	ft_count_if(tab, length, &ft_cc);
	return (0);
}