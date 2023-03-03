/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:08:11 by misidori          #+#    #+#             */
/*   Updated: 2022/12/08 11:41:01 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	array = malloc(diff * sizeof(int));
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < diff)
	{
		array[i] = min + i;
		i++;
	}
	return (diff);
}
