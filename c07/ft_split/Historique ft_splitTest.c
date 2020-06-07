/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Historique ft_splitTest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 17:20:07 by user42            #+#    #+#             */
/*   Updated: 2020/06/05 13:48:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// static int ft_ischarset(char c, char *charset)
// {
// 	int i;

// 	i = 0;
// 	while (charset[i] != '\0')
// 	{
// 		if (charset[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	**ft_split(char *str, char *charset)
// {
// 	int 	i;
// 	int		count;
// 	int		size;
// 	char 	**tab;

// 	tab = NULL;
// 	i = 0;
// 	count = 0;
// 	size = 0;
// 	while(str[i] != '\0')
// 	{
// 		if ((ft_ischarset(str[i], charset) == 0))
// 		{
// 			count++;
// 			while (str[i] != '\0' && (ft_ischarset(str[i++], charset) == 0))
// 				size++;
// 		}
// 		i++;
// 	}
// 	printf("\n%d\n", i);
// 	printf("\n\n%d\n\n", size);
// 	printf("\n%d\n", count);
// 	tab = (char**)malloc(sizeof(char*) * (count + 1));
// 	tab[count] = 0;

	
// 	return (tab);
// }


/////////////////////////////////////////////////// PRESQUE FONCTIONNEL /////////////////////////////////////////////////////////////

// char	**ft_split(char *str, char *charset)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int count;
// 	char	**tab;

// 	tab = NULL;
// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	count = 0;

// 	while (str[i] != '\0')
// 	{
// 		if (str[i] != charset[j])
// 			while (charset[j] != '\0' && str[i] != charset[j])
// 			{
// 				j++;
// 				if (charset[j] == str[i])
// 				{
// 					j = 0;
// 					i++;
// 				}
// 				else if (str[i] != charset[j] && charset[j] == '\0')
// 				{
// 					count++;
// 					j = 0;
// 					while (str[i] != charset[j])
// 					{
// 						if (charset[j] == str[i])
// 						{
// 							i++;
// 							j = 0;
// 						}
// 						while (str[i] != charset[j] && charset[j] != '\0')
// 							j++;
// 						if (charset[j] == '\0')
// 							j = 0;
// 						i++;
// 					}
// 				}
// 			}
// 		i++;
// 	}
	
// 	printf("%d", count);
// }
