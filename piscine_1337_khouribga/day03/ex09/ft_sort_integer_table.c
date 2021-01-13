/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 20:27:04 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/26 21:52:39 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int t;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				t = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = t;
			}
			j++;
		}
		i++;
	}
}
