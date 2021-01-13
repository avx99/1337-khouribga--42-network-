/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:53:14 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:53:42 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s1;

	i = 0;
	s1 = (const unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == s1[i])
		{
			return ((void *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
