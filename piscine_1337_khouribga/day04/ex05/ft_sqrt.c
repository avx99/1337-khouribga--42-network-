/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:18:31 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/27 21:33:22 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;

	racine = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (racine <= nb / 2)
		{
			if (nb == racine * racine)
				return (racine);
			else
				racine++;
		}
		return (0);
	}
}
