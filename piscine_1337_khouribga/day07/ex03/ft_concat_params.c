/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:39:43 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/09 18:58:44 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		l;

	i = 1;
	l = 0;
	while (i < argc)
	{
		l += (ft_strlen(argv[i] + 1));
		i++;
	}
	str = (char *)malloc(sizeof(char) * l);
	if (!str)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
		if (i != argc)
			ft_strcat(str, "\n");
	}
	return (str);
}
