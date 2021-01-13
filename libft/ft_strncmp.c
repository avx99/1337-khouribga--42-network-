/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:34:50 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:35:31 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sh1;
	unsigned char	*sh2;

	sh1 = (unsigned char *)s1;
	sh2 = (unsigned char *)s2;
	i = 0;
	while ((sh1[i] != '\0' || sh2[i] != '\0') && i < n)
	{
		if (sh1[i] != sh2[i])
			return (sh1[i] - sh2[i]);
		i++;
	}
	return (0);
}
