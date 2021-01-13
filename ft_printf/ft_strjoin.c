/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 23:19:35 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/26 23:21:55 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char *s1, char *s2, int a)
{
	int		i;
	int		j;
	char	*str;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
		while (s1[j])
			str[i++] = s1[j++];
	j = 0;
	if (s2)
		while (s2[j])
			str[i++] = s2[j++];
	if (a)
		free(s1);
	else
		free(s2);
	str[i] = '\0';
	return (str);
}
