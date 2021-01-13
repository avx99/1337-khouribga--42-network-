/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:01:10 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 12:01:53 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_it(char s, const char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == s)
			return (1);
		charset++;
	}
	return (0);
}

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while ((i < len) && (src[i]))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char		*ft_strtrim(char const *s, char const *set)
{
	size_t	fin;
	char	*temp;

	if (s == NULL)
		return (NULL);
	while (*s && (is_it(*s, set) == 1))
	{
		s++;
	}
	fin = ft_strlen(s);
	while (fin && (is_it(s[fin - 1], set) == 1))
		fin--;
	if (!(temp = malloc(sizeof(char) * (fin + 1))))
		return (NULL);
	temp = ft_strncpy(temp, s, fin);
	temp[fin] = '\0';
	return (temp);
}
