/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:00:17 by misidori          #+#    #+#             */
/*   Updated: 2022/11/23 16:53:47 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + x / 10);
			ft_putchar('0' + x % 10);
			ft_putchar(' ');
			ft_putchar('0' + y / 10);
			ft_putchar('0' + y % 10);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
