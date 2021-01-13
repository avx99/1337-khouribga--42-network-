/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 09:15:44 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/27 17:31:18 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int x;

	x = 0;
	if (nb == 0 || nb == 1)
	{
		x = 1;
		return (x);
	}
	else if (nb > 1 && nb < 13)
	{
		x = nb * ft_recursive_factorial(nb - 1);
		return (x);
	}
	else
	{
		return (0);
	}
}
