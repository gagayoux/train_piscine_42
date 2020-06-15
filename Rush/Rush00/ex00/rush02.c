/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 12:35:28 by user42            #+#    #+#             */
/*   Updated: 2020/06/07 15:27:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_verifandprint(int right, int back, int x, int y)
{
	if ((right == 0 && back == 0) || (right == (x - 1) && back == 0))
		ft_putchar('A');
	if ((right == 0 && back == (y - 1)) ||
	(right == (x - 1) && (back == y - 1)))
		ft_putchar('C');
	if ((right > 0 && right < (x - 1) && back == 0) ||
	(right == 0 && back < (y - 1) && back > 0) ||
	((right == (x - 1)) && back > 0 && back < (y - 1)) ||
	(right > 0 && right < (x - 1) && back == (y - 1)))
		ft_putchar('B');
	else if (right > 0 && right < (x - 1) && back > 0 && back < (y - 1))
		ft_putchar(' ');
}

void			rush02(int x, int y)
{
	int right;
	int	back;

	right = 0;
	back = 0;
	if (x < 1 || y < 1)
		return ;
	while (back < y)
	{
		while (right < x)
		{
			ft_verifandprint(right, back, x, y);
			right++;
		}
		ft_putchar('\n');
		right = 0;
		back++;
	}
}
