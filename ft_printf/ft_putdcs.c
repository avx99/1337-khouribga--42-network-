/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 22:58:41 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/26 22:59:30 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printd(va_list pa)
{
	long int	nbr;
	char		sign;
	char		*str;

	sign = '\0';
	nbr = (int)va_arg(pa, int);
	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	str = ft_itoa_base(nbr, 10);
	ft_put(str, sign);
}

void	ft_prints(va_list pa)
{
	char *str;

	str = (char *)va_arg(pa, char *);
	if (!str)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(str);
	if ((g_info.flags & POINT) && !g_info.preci)
		str = ft_strdup("");
	if (str && g_info.preci)
		str = ft_substr(str, 0, g_info.preci);
	g_info.preci = 0;
	if (g_zero == 1)
		g_info.flags |= ZERO;
	ft_put(str, -1);
}

void	ft_printc(va_list pa)
{
	char c;

	c = (char)va_arg(pa, int);
	if (g_info.widh)
	{
		while (!(g_info.flags & MIN) && --g_info.widh)
			ft_putchar(' ');
		ft_putchar(c);
		while (((g_info.flags & MIN)) && --g_info.widh)
			ft_putchar(' ');
	}
	else
		ft_putchar(c);
}

void	ft_printperc(void)
{
	char *str;

	str = ft_strdup(" ");
	str[0] = g_info.spf;
	g_info.preci = 0;
	if (g_zero == 1)
		g_info.flags |= ZERO;
	ft_put(str, -1);
}
