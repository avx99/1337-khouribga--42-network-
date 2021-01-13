/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:43:55 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:44:19 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char*)b;
	while (i < (int)len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return ((void*)dest);
}
