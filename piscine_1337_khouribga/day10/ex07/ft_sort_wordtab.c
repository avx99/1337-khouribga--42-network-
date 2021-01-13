/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:43:29 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/11 11:32:26 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			i = *s1 - *s2;
			return (i);
		}
	}
	return (i);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		a;
	char	*t;

	a = 0;
	i = 0;
	j = 0;
	while (tab[a])
		a++;
	while (i < a)
	{
		j = i + 1;
		while (j < a)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				t = tab[j];
				tab[j] = tab[i];
				tab[i] = t;
			}
			j++;
		}
		i++;
	}
}
