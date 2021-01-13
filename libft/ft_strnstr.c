/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:47:07 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:47:26 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *dest, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (dest[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == dest[j]) && ((str[i + j]) && (dest[j])))
			j++;
		if ((dest[j] == '\0') && ((i + j) <= len))
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
