/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:55:33 by misidori          #+#    #+#             */
/*   Updated: 2022/12/07 17:00:06 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	mod;
	int	nb_value;

	i = 2;
	mod = 1;
	nb_value = nb;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		mod = nb_value % i;
		if (mod == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
