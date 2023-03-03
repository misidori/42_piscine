/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:21:37 by misidori          #+#    #+#             */
/*   Updated: 2022/12/06 18:38:47 by misidori         ###   ########.fr       */
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
	while (i <= (nb / 2))
	{
		mod = nb_value % i;
		if (mod == 0)
			return (0);
		i++;
	}
	return (1);
}
