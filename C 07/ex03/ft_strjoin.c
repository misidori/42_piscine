/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:29:17 by misidori          #+#    #+#             */
/*   Updated: 2022/12/08 11:41:16 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		j;
	int		n;

	string = (char *)malloc(sizeof(strs));
	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			string[n++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			string[n++] = sep[j++];
		}
		i++;
	}
	string[n] = '\0';
	return (string);
}
