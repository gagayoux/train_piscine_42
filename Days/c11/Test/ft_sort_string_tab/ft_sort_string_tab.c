/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:20:34 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 17:24:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	char *temp;

	i = 0;
	while (tab[i] != NULL)
	{
		j = i;
		while (tab[j] != NULL)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}	

	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
}

int main(void)
{
	char **tab;
	char *ptr;

	ptr = NULL;
	tab = (char **)malloc(sizeof(char *) * 4);
	tab[0] = (char*)malloc(sizeof(char) * 6);
	tab[1] = (char*)malloc(sizeof(char) * 7);
	tab[2] = (char*)malloc(sizeof(char) * 5);
	tab[3] = (char*)malloc(sizeof(char) * 1);
	tab[0][0] = 'a';
	tab[0][1] = 'a';
	tab[0][2] = 'l';
	tab[0][3] = 't';
	tab[0][4] = 'u';
	tab[0][5] = '\0';
	tab[1][0] = 'A';
	tab[1][1] = 's';
	tab[1][2] = 'o';
	tab[1][3] = 'n';
	tab[1][4] = 'e';
	tab[1][5] = 'B';
	tab[1][6] = '\0';
	tab[2][0] = 'Z';
	tab[2][1] = 'i';
	tab[2][2] = 'D';
	tab[2][3] = 'a';
	tab[2][4] = '\0';
	tab[3][0] = 0;
	ft_sort_string_tab(tab);
	return (0);
}