/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:47:52 by misidori          #+#    #+#             */
/*   Updated: 2022/12/07 12:30:59 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *argv1, char *argv2)
{
	int	i;

	i = 0;
	while (argv1[i] != '\0' || argv2[i] != '\0')
	{
		if (argv1[i] == argv2[i])
			i++;
		if (argv1[i] < argv2[i] || argv1[i] > argv2[i])
			return (argv1[i] - argv2[i]);
	}
	return (0);
}

void	ft_swap(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
