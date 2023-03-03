/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:00:25 by misidori          #+#    #+#             */
/*   Updated: 2022/12/05 18:18:38 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_positive_number(int nb)
{
	int		i;
	int		j;
	int		nb_value;
	int		nb_length;
	char	n[10];

	nb_value = nb;
	i = 0;
	nb_length = 0;
	while (nb_value != 0)
	{
		j = 0;
		j = nb_value % 10;
		nb_value = nb_value / 10;
		nb_length++;
		n[i] = j + '0';
		i++;
	}
	i = 0;
	while (i < nb_length)
	{
		write(1, &n[nb_length -1 - i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb >= -2147483647 && nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_print_positive_number(nb);
	}
	else if (nb > 0 && nb <= 2147483647)
		ft_print_positive_number(nb);
	else
	{
		write(1, "0", 1);
	}
}
