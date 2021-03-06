/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:19:07 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 10:30:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (size < length)
	{
		f(tab[i]);
		size++;
		i++;
	}
}
