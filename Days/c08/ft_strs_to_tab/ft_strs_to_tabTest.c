/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tabTest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 17:57:20 by user42            #+#    #+#             */
/*   Updated: 2020/07/13 12:04:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	ft_malloc_struct(int i, int k, char **av, struct s_stock_str *str_struct)
{
	int j;

	j = 0;
	while (av[k][j] != '\0')
	j++;
	str_struct[i].size = j;
	str_struct[i].str = (char*)malloc(sizeof(char) * (j + 1));
	str_struct[i].copy = (char*)malloc(sizeof(char) * (j + 1));
	str_struct[i].str[j] = '\0';
	str_struct[i].copy[j] = '\0';
	return (str_struct[i]);
}

struct s_stock_str	ft_coppy_in_struct(int i, int k, char **av, struct s_stock_str *str_struct)
{
	int j;

	j = 0;
	while (av[k][j] != '\0')
	{
		str_struct[i].str[j] = av[k][j];
		j++;
	}
	printf("str = %s\n", str_struct[i].str);
	j = 0;
	while (str_struct[i].str[j] != '\0')
	{
		str_struct[i].copy[j] = str_struct[i].str[j];
		j++;
	}
	printf("copy = %s\n", str_struct[i].str);
	return (str_struct[i]);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str_struct;
	int			count;
	int			i;
	int			j;
	int			k;

	str_struct = (t_stock_str*)malloc(sizeof(t_stock_str) * ((ac - 1) + 1));
	if (str_struct == NULL)
		return (NULL);
	count = 0;
	i = 0;
	j = 0;
	k = 1;
	while (count < (ac - 1))
	{
		str_struct[i] = ft_malloc_struct(i, k, av, str_struct);
		printf("size de la structure %d = %d\n", i, str_struct[i].size);
		str_struct[i] = ft_coppy_in_struct(i, k, av, str_struct);
		j = 0;
		i++;
		k++;
		count++;
	}
	return (str_struct);
}

int					main(int ac, char **av)
{
	ft_strs_to_tab(ac, av);
	return (0);
}
