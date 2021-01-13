/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 23:14:33 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/26 23:14:57 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_size(unsigned long int n, unsigned long base)
{
	if (n < base)
		return (1);
	else
		return (1 + ft_size(n / base, base));
}

char			*ft_itoa_base(unsigned long int value, int base)
{
	int		n;
	char	*tab;

	if (!value && (g_info.flags & POINT))
		return (ft_strdup(""));
	if (base > 16 && base < 2)
		return (NULL);
	n = ft_size(value, base);
	if (!(tab = malloc(n + 1)))
		return (NULL);
	tab[n--] = '\0';
	while (n >= 0)
	{
		if ((value % base) > 9)
			tab[n--] = ((value % base) - 10) + 'a';
		else
			tab[n--] = (value % base) + '0';
		value /= base;
	}
	return (tab);
}
