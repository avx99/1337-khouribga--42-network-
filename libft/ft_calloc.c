/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:41:25 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:41:42 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *m;

	if (!(m = (void *)malloc(size * count)))
		return (NULL);
	ft_bzero(m, count * size);
	return (m);
}
