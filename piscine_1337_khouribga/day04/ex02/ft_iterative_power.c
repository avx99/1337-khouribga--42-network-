/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 09:47:14 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/28 17:47:57 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int x;
	int n;

	i = 1;
	n = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb = nb * n;
			i++;
		}
		x = nb;
		return (x);
	}
	else if (power == 0)
		return (1);
	else
	{
		x = 0;
		return (x);
	}
}
