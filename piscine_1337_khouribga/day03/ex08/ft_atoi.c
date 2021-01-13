/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:11:27 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/27 13:55:32 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int n;
	int indice;

	n = 0;
	while (*str >= 0 && *str <= 32)
		str++;
	if (*str == '-')
	{
		indice = -1;
		str++;
	}
	else if (*str == '+')
	{
		indice = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		n = n * 10 + *str - '0';
		str++;
	}
	if (indice == -1)
		n = n * (-1);
	return (n);
}
