/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:48:38 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/28 21:28:04 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0)
	{
		result = 0;
		return (result);
	}
	else if (power == 0)
	{
		result = 1;
		return (result);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}
