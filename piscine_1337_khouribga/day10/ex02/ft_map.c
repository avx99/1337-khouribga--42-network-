/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:12:01 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/10 15:25:26 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *t;

	i = 0;
	t = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		t[i] = (*f)(tab[i]);
		i++;
	}
	return (t);
}
