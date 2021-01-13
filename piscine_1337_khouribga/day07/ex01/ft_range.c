/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:42:09 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/08 18:00:39 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	while (max >= min)
	{
		tab[max - min - 1] = max - 1;
		max--;
	}
	return (tab);
}
