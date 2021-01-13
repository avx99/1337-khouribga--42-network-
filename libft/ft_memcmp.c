/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:12:10 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:13:30 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sa;
	const unsigned char	*sb;

	i = -1;
	sa = s1;
	sb = s2;
	while (++i < n)
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
	return (0);
}
