/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:51:50 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/09 15:52:53 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	while (src[i])
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*structure;

	structure = malloc(sizeof(t_stock_par) * (1 + ac));
	i = 0;
	while (i < ac)
	{
		structure[i].size_param = ft_strlen(av[i]);
		structure[i].str = av[i];
		structure[i].copy = ft_strdup(av[i]);
		structure[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	structure[i].str = 0;
	return (structure);
}
