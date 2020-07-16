/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 13:30:23 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 14:05:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str	fm(int i, int k, char **av, struct s_stock_str *str_struct)
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

struct s_stock_str	fc(int i, int k, char **av, struct s_stock_str *str_struct)
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
		str_struct[i] = fm(i, k, av, str_struct);
		printf("size de la structure %d = %d\n", i, str_struct[i].size);
		str_struct[i] = fc(i, k, av, str_struct);
		j = 0;
		i++;
		k++;
		count++;
	}
	return (str_struct);
}
