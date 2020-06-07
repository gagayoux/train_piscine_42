/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 12:13:08 by user42            #+#    #+#             */
/*   Updated: 2020/06/03 16:23:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_ifsizeisnull(void)
{
	char	*newstr;

	newstr = (char*)malloc(sizeof(char));
	newstr[0] = '\0';
	return (newstr);
}

char	*ft_concatenate(char *new_str, char *sep, char **strs, int size)
{
	int		k;
	int		l;
	int		i;
	int		j;

	i = 0;
	l = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			new_str[k++] = strs[i][j++];
		if (i != size - 1)
		{
			while (sep[l] != '\0')
				new_str[k++] = sep[l++];
		}
		l = 0;
		j = 0;
		i++;
	}
	printf("%s", new_str);
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*newstr;
	int		l;

	i = 0;
	j = 0;
	if (size < 1)
		ft_ifsizeisnull();
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
			l++;
		}
		j = 0;
		i++;
	}
	while (sep[l] != '\0')
		l++;
	newstr = (char*)malloc(sizeof(char) * (l + (size * i)));
	ft_concatenate(newstr, sep, strs, size);
}

int		main(void)
{
	char **tab;

	tab = (char**)malloc(sizeof(char*) * 3);
	tab[0] = (char*)malloc(sizeof(char) * 5);
	tab[1] = (char*)malloc(sizeof(char) * 6);
	tab[2] = (char*)malloc(sizeof(char) * 6);
	tab[0][0] = 'S';
	tab[0][1] = 'a';
	tab[0][2] = 'l';
	tab[0][3] = ' ';
	tab[0][4] = '\0';
	tab[1][0] = 'c';
	tab[1][1] = 'v';
	tab[1][2] = 'q';
	tab[1][3] = ' ';
	tab[1][4] = 'v';
	tab[1][5] = '\0';
	tab[2][0] = 'a';
	tab[2][1] = 'l';
	tab[2][2] = ' ';
	tab[2][3] = 'r';
	tab[2][4] = ' ';
	tab[2][5] = '\0';
	ft_strjoin(3, tab, "#");
	return (0);
}
