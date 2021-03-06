/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:21:25 by root              #+#    #+#             */
/*   Updated: 2020/05/12 17:55:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = dest;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (ptr);
}
