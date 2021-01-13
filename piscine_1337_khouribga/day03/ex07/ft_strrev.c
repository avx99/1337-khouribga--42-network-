/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 21:13:21 by oabouzid          #+#    #+#             */
/*   Updated: 2019/08/27 15:38:38 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		l;
	char	*c;

	c = str;
	while (*c)
	{
		c++;
	}
	l = c - str;
	return (l);
}

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	int		j;
	char	t;

	l = ft_strlen(str);
	i = 0;
	j = l;
	j--;
	while (i < (l / 2))
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		i++;
		j--;
	}
	return (str);
}
