/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 13:18:59 by root              #+#    #+#             */
/*   Updated: 2020/05/12 18:14:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int count;
	int swap;
	int size;

	count = 0;
	i = 1;
	size = 0;
	while (argc > count + 1)
	{
		while (argv[i][j] != '\0')
		{
			size++;
			j++;
		}
		j = 0;
		while (j < (size - 1))
		{
			if (argv[i][j] > argv[i][j + 1])
			{
				swap = argv[i][j];
				argv[i][j] = argv[i][j + 1];
				argv[i][j + 1] = swap;
				j = 0;
			}
			else
				j++;
		}
		ft_putstr(argv[i]);
		ft_putchar('\n');
		j = 0;
		i++;
		size = 0;
		count++;
	}
	return (0);
}
