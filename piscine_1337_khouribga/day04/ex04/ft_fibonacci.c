/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:42:20 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/27 18:48:28 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 1;
	if (index == 0)
		return (i);
	else if (index == 1)
		return (j);
	else if (index >= 2)
	{
		x = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (x);
	}
	else
		return (-1);
}
