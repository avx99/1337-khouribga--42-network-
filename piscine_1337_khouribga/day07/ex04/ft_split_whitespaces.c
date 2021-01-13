/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_withespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:55:24 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/08 20:30:13 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_word_length(char *str, int i)
{
	int word_length;

	word_length = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		word_length++;
		i++;
	}
	return (word_length);
}

int		ft_word_number(char *str)
{
	int i;
	int word_number;

	i = 0;
	word_number = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				&& (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
					|| str[i - 1] == '\n') && str[i])
			word_number++;
		i++;
	}
	return (word_number);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char*) * (ft_word_number(str) + 1));
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			j = 0;
			tab[k] = malloc(sizeof(char) * (ft_word_length(str, i) + 1));
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				tab[k][j++] = str[i++];
			tab[k][j] = '\0';
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
}
