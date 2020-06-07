/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:03:32 by root              #+#    #+#             */
/*   Updated: 2020/05/12 17:50:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcpy(char *str, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (src[i] != '\0' && ((size - 1) > 0))
	{
		str[i] = src[i];
		i++;
		size--;
	}
	str[i] = '\0';
	return (str);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int lenght;

	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	ft_strcpy(dest, src, size);
	return (lenght);
}
