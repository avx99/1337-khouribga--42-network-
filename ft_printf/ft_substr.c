/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:02:05 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/28 21:38:09 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			lnew;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
	{
		if (!(str = malloc(sizeof(char))))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	lnew = ft_strlen(&s[start]);
	if (lnew >= len)
		lnew = len;
	if (!(str = (char *)malloc(sizeof(char) * (lnew + 1))))
		return (NULL);
	while (i < len && *s != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
