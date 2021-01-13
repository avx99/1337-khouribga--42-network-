/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:24:50 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/10 16:37:37 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (tab[i])
	{
		s = s + (*f)(tab[i]);
		i++;
	}
	tab[i] = 0;
	return (s);
}