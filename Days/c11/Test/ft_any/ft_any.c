/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:52:06 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 11:05:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_cc(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'p')
			return (1);
		i++;
		printf("%d", i);
	}
	return (0);
}

int		ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if(f(tab[i]) != 0)
		{
			printf("ok");
			return (1);
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char **tab;

	tab = (char**)malloc(sizeof(char*) * 3);
	tab[0] = (char*)malloc(sizeof(char) * 6);
	tab[1] = (char*)malloc(sizeof(char) * 7);
	tab[2] = (char*)malloc(sizeof(char) * 1);
	tab[0][0] = 'S';
	tab[0][1] = 'a';
	tab[0][2] = 'l';
	tab[0][3] = 'u';
	tab[0][4] = 't';
	tab[0][5] = '\0';
	tab[1][0] = 'C';
	tab[1][1] = 'o';
	tab[1][2] = 'u';
	tab[1][3] = 'c';
	tab[1][4] = 'o';
	tab[1][5] = 'p';
	tab[1][6] = '\0';
	tab[2][0] = '\0';

	ft_any(tab, &ft_cc);
	return (0);
}