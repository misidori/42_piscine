/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:24:07 by misidori          #+#    #+#             */
/*   Updated: 2022/12/06 18:24:03 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
