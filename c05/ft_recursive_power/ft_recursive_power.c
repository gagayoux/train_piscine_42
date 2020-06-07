/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:30:49 by root              #+#    #+#             */
/*   Updated: 2020/05/12 18:06:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
