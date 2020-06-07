/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 17:20:07 by user42            #+#    #+#             */
/*   Updated: 2020/06/06 13:33:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ischarset(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((ft_ischarset(charset, str[i]) == 0))
		{
			count++;
			while (str[i] != '\0' && (ft_ischarset(charset, str[i]) == 0))
				i++;
		}
		i++;
	}
	return (count);
}

// char	**ft_wordcopystrintab(char *str, char *charset, int i, int l, char **tab)
// {
// 	int j;
// 	int size;
// 	int col;

// 	j = 0;
// 	col = 0;
// 	size = 0;
// 	while (str[i] != '\0' && (ft_ischarset(charset, str[i]) == 0))
// 	{
// 		i++;
// 		size++;
// 	}
// 	tab[j] = (char*)malloc(sizeof(char) * (size + 1));
// 	tab[j][size] = '\0';
// 	while (col < size)
// 	{
// 		tab[j][col] = str[l];
// 		col++;
// 		l++;
// 	}
// 	return (tab);
// }

char	**ft_wordcopy(char *str, char *charset, char **tab)
{
	int i;
	int j;
	int size;
	int l;
	int col;

	i = 0;
	j = 0;
	size = 0;
	l = 0;
	col = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (ft_ischarset(charset, str[i]) == 1))
		{
			i++;
			l++;
		}
		if (str[i] == '\0')
			break ;
		size = 0;
		// ft_wordcopystrintab(str, charset, i, l, tab);
		while (str[i] != '\0' && (ft_ischarset(charset, str[i]) == 0))
		{
			i++;
			size++;
		}
		tab[j] = (char*)malloc(sizeof(char) * (size + 1));
		tab[j][size] = '\0';
		while (col < size)
		{
			tab[j][col] = str[l];
			col++;
			l++;
		}
		col = 0;
		j++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**tab;

	count = (ft_wordcount(str, charset));
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	tab[count] = "0";
	tab = (ft_wordcopy(str, charset, tab));
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
	printf("%s\n", tab[6]);
	return (tab);
}

int		main(void)
{
	char *str = ",.,.,B.o.njrur.,ca va, bien ,,ha,,,,,,...";
	char *charset = ".,";

	ft_split(str, charset);
	return (0);
}
