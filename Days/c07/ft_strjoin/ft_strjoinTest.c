/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinTestv2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 12:13:08 by user42            #+#    #+#             */
/*   Updated: 2020/06/08 12:14:00 by user42           ###   ########.fr       */
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

char	*ft_copy_new_str(char **strs, char *sep, int size, char *new_str)
{
	int i;
	int j;
	int k;
	int count;

	i = 0;
	j = 0;
	k = 0;
	count = 0;
	while (count < size)
	{
		while (strs[count][i] != '\0')
		{
			new_str[j] = strs[count][i];
			j++;
			i++;
		}
		while (sep[k] != '\0' && count < (size - 1))
			new_str[j++] = sep[k++];
		k = 0;
		i = 0;
		count++;
	}
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		i;
	int		j;
	int		count;
	
	i = 0;
	j = 0;
	count = 0;
	if (size < 1)
		ft_ifsizeisnull();
	while (count < size)
	{
		while (strs[count][i++] != '\0')
			i++;
		i = 0;
		count++;
	}
	i = 0;
	while (sep[i++] != '\0')
	new_str = (char *)malloc(sizeof(char) * ((j + 1) + ((size - 1) * (i))));
	new_str[j] = '\0';
	new_str = ft_copy_new_str(strs, sep, size, new_str);
	return (new_str);
}

int		main(void)
{
	char **tab;

	tab = (char**)malloc(sizeof(char*) * 3);
	tab[0] = (char*)malloc(sizeof(char) * 8);
	tab[1] = (char*)malloc(sizeof(char) * 6);
	tab[2] = (char*)malloc(sizeof(char) * 3);
	tab[0][0] = 'B';
	tab[0][1] = 'o';
	tab[0][2] = 'n';
	tab[0][3] = 'j';
	tab[0][4] = 'o';
	tab[0][5] = 'u';
	tab[0][6] = 'r';
	tab[0][7] = '\0';
	tab[1][0] = 'c';
	tab[1][1] = 'a';
	tab[1][2] = ' ';
	tab[1][3] = 'v';
	tab[1][4] = 'a';
	tab[1][5] = '\0';
	tab[2][0] = 'o';
	tab[2][1] = 'k';
	tab[2][2] = '\0';
	ft_strjoin(3, tab, ".,.");
	return (0);
}
