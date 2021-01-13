/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:27:59 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/09 18:34:49 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int l;
	int *tab;

	i = 0;
	l = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * l)))
		return (0);
	while (i < l)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (l);
}
