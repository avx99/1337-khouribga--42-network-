/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:21:12 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:21:37 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	i = 0;
	a = (char *)dest;
	b = (const char *)src;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
