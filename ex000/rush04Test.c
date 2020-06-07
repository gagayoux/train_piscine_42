/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04Test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:41:00 by user42            #+#    #+#             */
/*   Updated: 2020/06/07 15:22:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static void		ft_verif_and_print(int right, int back, int x, int y)
{
	if ((right == 0 && back == 0) || (right == (x - 1) && back == (y - 1)))
		ft_putchar('A');
	if ((right == (x - 1) && back == 0) || (right == 0 && back == (y - 1)))
		ft_putchar('C');
	if ((back == 0 && right > 0 && right < (x - 1)) ||
	(back > 0 && back < (y - 1) && right == 0) ||
	(right == (x - 1) && back > 0 && back < (y - 1)) ||
	(back == (y - 1) && right > 0 && right < (x - 1)))
		ft_putchar('B');
	else if (right > 0 && right < (x - 1) && back > 0 && back < (y - 1))
		ft_putchar(' ');
}

void			rush04(int x, int y)
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
			ft_verif_and_print(right, back, x, y);
			right++;
		}
		ft_putchar('\n');
		right = 0;
		back++;
	}
}

int				main(void)
{
	rush04(50, 20);
	return (0);
}
