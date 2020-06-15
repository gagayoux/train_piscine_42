/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 12:13:08 by user42            #+#    #+#             */
/*   Updated: 2020/06/08 12:20:13 by user42           ###   ########.fr       */
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

char	*ft_cpystr_in_newstr(char **strs, char *sep, int size, char *new_str)
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
	while (sep[i] != '\0')
		i++;
	new_str = (char *)malloc(sizeof(char) * ((j + 1) + ((size - 1) * (i))));
	new_str[j] = '\0';
	new_str = ft_cpystr_in_newstr(strs, sep, size, new_str);
	return (new_str);
}
