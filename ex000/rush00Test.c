/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00Test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:39:57 by wozsertt          #+#    #+#             */
/*   Updated: 2020/06/07 15:24:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_verif_n_print(int horizontal, int vertical, int x, int y)
{
	if ((horizontal == 0 && vertical == 0) || (horizontal == (x - 1)
	&& vertical == 0) || (horizontal == 0 && vertical == (y - 1))
	|| (horizontal == (x - 1) && vertical == (y - 1)))
		ft_putchar('o');
	if ((vertical == 0 && horizontal > 0 && horizontal < (x - 1))
	|| (vertical == (y - 1) && horizontal > 0 && horizontal < (x - 1)))
		ft_putchar('-');
	if (vertical > 0 && vertical < (y - 1) && horizontal > 0
	&& horizontal < (x - 1))
		ft_putchar(' ');
	else if ((horizontal == 0 && vertical > 0 && vertical < (y - 1))
	|| (horizontal == (x - 1) && vertical > 0 && vertical < (y - 1)))
		ft_putchar('|');
}

void	rush00(int x, int y)
{
	int horizontal;
	int vertical;

	horizontal = 0;
	vertical = 0;
	if (x < 1 || y < 1)
		return ;
	while (vertical < y)
	{
		while (horizontal < x)
		{
			ft_verif_n_print(horizontal, vertical, x, y);
			horizontal++;
		}
		ft_putchar('\n');
		horizontal = 0;
		vertical++;
	}
}

int main(void)
{
	rush00(50, 25);
	return (0);
}