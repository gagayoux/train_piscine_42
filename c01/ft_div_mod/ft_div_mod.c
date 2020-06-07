/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:20 by root              #+#    #+#             */
/*   Updated: 2020/05/12 14:52:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int resultdiv;
	int resultmod;

	a = 15;
	b = 2;
	resultdiv = a / b;
	resultmod = a % b;
	div = &resultdiv;
	mod = &resultmod;
}
