/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:57:11 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:58:14 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*src != '\0')
	{
		*a = *src;
		a++;
		src++;
	}
	*a = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	a;
	size_t	b;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	temp = malloc(sizeof(char) * (a + b + 1));
	if (temp == NULL)
		return (NULL);
	ft_strcpy(temp, (char*)s1);
	ft_strcat(temp, (char*)s2);
	return (temp);
}
