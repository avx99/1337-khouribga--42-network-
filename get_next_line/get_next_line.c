/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:19:01 by oabouzid          #+#    #+#             */
/*   Updated: 2019/12/25 15:24:53 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_last_line(char **new, int n, char **line, int fd)
{
	char	*temp;
	int		i;

	i = 0;
	while (new[fd][i] && new[fd][i] != '\n')
		i++;
	*line = ft_substr(new[fd], 0, i);
	if (!new[fd][i])
	{
		temp = new[fd];
		new[fd] = NULL;
		free(temp);
		return (0);
	}
	else
	{
		temp = new[fd];
		new[fd] = ft_strdup((new[fd]) + i + 1);
		free(temp);
	}
	if (!new[fd] || !*line)
		return (-1);
	if (n || (n == 0 && new[fd] != NULL))
		return (1);
	return (-1);
}

int			get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*oldline[4864];
	char		*temp;
	int			n;

	buff = NULL;
	if (!line || fd < 0 || fd >= 4864 || BUFFER_SIZE <= 0
			|| !(buff = malloc(BUFFER_SIZE + 1)) || read(fd, buff, 0) == -1)
		return (-1);
	if (!oldline[fd])
		if (!(oldline[fd] = ft_strdup("")))
			return (-1);
	while ((!ft_strchr(oldline[fd], '\n')) && (n = read(fd, buff, BUFFER_SIZE)))
	{
		if (n < 0)
			return (-1);
		temp = oldline[fd];
		buff[n] = '\0';
		if (!(oldline[fd] = ft_strjoin(oldline[fd], buff)))
			return (-1);
		free(temp);
	}
	free(buff);
	return (ft_last_line(oldline, n, line, fd));
}
