/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:46:48 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/11 17:13:52 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		j = 0;
		while (j + i < length - 1)
		{
			if ((*f)(tab[i], tab[i + j + 1]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
