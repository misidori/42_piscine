/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:48:30 by misidori          #+#    #+#             */
/*   Updated: 2022/12/06 18:28:04 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		result = result * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
