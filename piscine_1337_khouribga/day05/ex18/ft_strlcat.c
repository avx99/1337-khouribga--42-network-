/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:45:58 by oabouzid          #+#    #+#             */
/*   Updated: 2019/09/07 13:47:55 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int l;
	unsigned int i;
	unsigned int j;

	l = 0;
	i = 0;
	j = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
		i++;
	if (size <= l)
		i += size;
	else
		i += l;
	while (src[j] && l < size - 1)
	{
		dest[l] = src[j];
		l++;
		j++;
	}
	dest[l] = '\0';
	return (i);
}
