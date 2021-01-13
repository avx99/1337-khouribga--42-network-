/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:20:03 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/31 16:26:19 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (to_find[l])
		l++;
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == l - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
