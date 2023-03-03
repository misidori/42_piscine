/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:44:19 by misidori          #+#    #+#             */
/*   Updated: 2022/12/06 18:22:37 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
