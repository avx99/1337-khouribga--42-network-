/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:51:47 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:52:20 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	nvc;
	unsigned char	*nvdst;
	unsigned char	*nvsrc;

	i = 0;
	nvc = (unsigned char)c;
	nvsrc = (unsigned char *)src;
	nvdst = (unsigned char *)dst;
	while (i < n)
	{
		nvdst[i] = nvsrc[i];
		i++;
		if (nvdst[i - 1] == nvc)
			return (nvdst + i);
	}
	return (NULL);
}
