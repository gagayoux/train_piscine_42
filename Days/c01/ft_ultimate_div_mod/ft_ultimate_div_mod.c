/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:20 by root              #+#    #+#             */
/*   Updated: 2020/05/12 17:40:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int *a, int *b)
{
	int	resultdiv;
	int	resultmod;

	resultdiv = *a / *b;
	resultmod = *a % *b;
	a = &resultdiv;
	b = &resultmod;
}
