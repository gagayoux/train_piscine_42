/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 16:23:55 by user42            #+#    #+#             */
/*   Updated: 2020/06/03 16:24:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
