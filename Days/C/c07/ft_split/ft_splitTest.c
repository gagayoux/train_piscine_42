/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 12:24:39 by user42            #+#    #+#             */
/*   Updated: 2020/06/30 18:49:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int		ft_is_charset(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int		ft_words_count(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((ft_is_charset(charset, str[i]) == false))
		{
			count++;
			while (ft_is_charset(charset, str[i]) == false)
				i++;
		}
		i++;
	}
	printf("%d\n", count);
	return (count);
}

int		ft_get_word_length(char *str, char *charset, int *ui, int *ul)
{
	int size;

	size = 0;
	while (str[*ui] != '\0' && (ft_is_charset(charset, str[*ui]) == 1))
	{
		*ui += 1;
		*ul += 1;
	}
	while (str[*ui] != '\0' && (ft_is_charset(charset, str[*ui]) == 0))
	{
		*ui += 1;
		size++;
	}
	return (size);
}

char	**ft_malloc_and_copy(char *str, char *charset, char **tab_str, int size)
{
	int		i;
	int		j;
	int		l;
	int		col;

	i = 0;
	j = 0;
	l = 0;
	while (str[i] != '\0')
	{
		size = ft_get_word_length(str, charset, &i, &l);
		if (str[i] == '\0')
			break ;
		tab_str[j] = (char*)malloc(sizeof(char) * (size + 1));
		tab_str[j][size] = '\0';
		col = 0;
		while (col < size)
			tab_str[j][col++] = str[l++];
		j++;
	}
	return (tab_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab_str;
	int		size;

	size = ft_words_count(str, charset);
	tab_str = (char**)malloc(sizeof(char*) * (size + 1));
	tab_str[size] = 0;
	ft_malloc_and_copy(str, charset, tab_str, size);
	return (tab_str);
}

int		main(void)
{
	char *str = "Salut.,Coucou..Cava;;.TuvasBien";
	char *charset = ".,;";

	ft_split(str, charset);
	return (0);
}
