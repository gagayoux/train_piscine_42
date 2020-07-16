/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:51:25 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 15:26:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ischarset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0' && c != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_size_of_tab(int count, char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_ischarset(str[i], charset) == 1)
		{
			count++;
			while ((ft_ischarset(str[i], charset) == 1) && str[i] != '\0')
			{
				i++;
			}
		}
		if (str[i] != '\0')
			i++;
	}
	return (count);
}

void	ft_move_whilenocharset(int *ip, char *charset, int *kp, char *str)
{
	while (ft_ischarset(str[*ip], charset) == 1)
	{
		*ip += 1;
		*kp += 1;
	}
}

char	**ft_mallandprint_tab2(char **tab, char *str, char *charset, int size)
{
	int i;
	int numb_of_char;
	int k;
	int copy;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		copy = 0;
		numb_of_char = 0;
		while (ft_ischarset(str[i], charset) == 0)
		{
			i++;
			numb_of_char++;
		}
		tab[size] = (char*)malloc(sizeof(char) * numb_of_char + 1);
		tab[size][numb_of_char] = '\0';
		while (copy < numb_of_char)
			tab[size][copy++] = str[k++];
		size++;
		ft_move_whilenocharset(&i, charset, &k, str);
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**tab;
	int		size;

	count = 0;
	size = 0;
	count = ft_size_of_tab(count, str, charset);
	tab = (char**)malloc(sizeof(count + 1));
	tab[count] = (char*)malloc(sizeof(char));
	tab[count] = 0;
	tab = ft_mallandprint_tab2(tab, str, charset, size);
	return (tab);
}
