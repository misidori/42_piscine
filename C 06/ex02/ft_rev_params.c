/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:29:19 by misidori          #+#    #+#             */
/*   Updated: 2022/12/07 12:44:43 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	if (argc != 0)
	{
		while (argv[i] != '\0')
			i++;
		len = i;
		i = 0;
		while (argv[len - 1] != argv[0])
		{
			j = 0;
			while (argv[len - 1][j] != '\0')
			{
				write(1, &argv[len - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			len--;
			i++;
		}
	}
	return (0);
}
