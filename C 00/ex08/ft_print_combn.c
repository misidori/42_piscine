/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:56:31 by misidori          #+#    #+#             */
/*   Updated: 2022/11/23 17:08:07 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_one_comb(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		ft_putchar(tab[i++] + 48);
	}
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	if (n < 1 || n > 9)
		return ;
	ft_print_one_comb(tab, n);
}
