/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 14:37:27 by root              #+#    #+#             */
/*   Updated: 2020/05/18 16:38:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int len;

	i = 0;
	len = 0;
	while(src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(*src) * (len +1));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	printf("%s", dest);
	free(dest);
	return (dest);
}

int main(void)
{
	char *src = "Bonjour";
	ft_strdup(src);
	return(0);
}