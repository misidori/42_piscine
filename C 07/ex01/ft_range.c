/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:29:58 by misidori          #+#    #+#             */
/*   Updated: 2022/12/08 11:20:45 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*p_i;

	i = 0;
	range = max - min;
	if (min >= max)
		return (0);
	p_i = (int *) malloc(range * sizeof(int));
	if (!p_i)
		return (0);
	if (min < max)
	{
		while (i < range)
		{
			p_i[i] = min;
			i++;
			min++;
		}
	}
	return (p_i);
}
