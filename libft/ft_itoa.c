/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:31:00 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:31:51 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numbre_digits(long n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*tab;
	size_t	size;
	long	nb;
	int		xx;

	xx = 0;
	nb = n;
	size = numbre_digits(nb);
	if (nb < 0)
		xx = xx + 1;
	if (!(tab = (char *)malloc(sizeof(char) * (size + xx + 1))))
		return (NULL);
	tab[size + xx] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		tab[0] = '-';
	}
	while (size)
	{
		tab[size + xx - 1] = '0' + (nb % 10);
		nb = nb / 10;
		size--;
	}
	return (tab);
}
