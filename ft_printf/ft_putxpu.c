/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxpu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 22:55:14 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/26 22:58:19 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_upper(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		if (str[index] <= 'z' && str[index] >= 'a')
			str[index] += 'A' - 'a';
}

void		ft_printx(va_list pa)
{
	char *str;

	str = ft_itoa_base((unsigned int)va_arg(pa, unsigned int), 16);
	if (g_info.spf == 'x')
		ft_put(str, -1);
	if (g_info.spf == 'X')
	{
		ft_upper(str);
		ft_put(str, -1);
	}
}

void		ft_printp(va_list pa)
{
	char				*str;
	unsigned long int	nbr;

	nbr = (unsigned long int)va_arg(pa, void *);
	if (!nbr && (g_info.flags & POINT))
		str = ft_strdup("0x");
	else
		str = ft_strjoin("0x", ft_itoa_base(nbr, 16), 0);
	ft_put(str, -1);
}

void		ft_printu(va_list pa)
{
	char *str;

	str = ft_itoa_base((unsigned int)va_arg(pa, unsigned int), 10);
	ft_put(str, -1);
}
