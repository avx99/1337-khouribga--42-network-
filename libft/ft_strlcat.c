/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:58:25 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:59:00 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t size_of_dest;
	size_t size_of_src;
	size_t b;

	b = 0;
	size_of_dest = ft_strlen((const char *)dest);
	size_of_src = ft_strlen((const char *)src);
	if (size_of_dest >= size)
	{
		return (size + size_of_src);
	}
	else
	{
		while (src[b] != '\0' && size_of_dest < size - 1)
		{
			dest[size_of_dest] = src[b];
			b++;
			size_of_dest++;
		}
		dest[size_of_dest] = '\0';
		return (size_of_src + size_of_dest - b);
	}
}
