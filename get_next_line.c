/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/09 13:24:29 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*readline(char *temp, int fd)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;
	char			*s;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (temp == NULL)
			temp = ft_strnew(1);
		buff[ret] = '\0';
		s = temp;
		temp = ft_strjoin(temp, buff);
		if (ft_strchr(temp, '\n') != NULL)
			break ;
	}
	if (*s != 0)
		free(s);
	return (temp);
}

int			get_next_line(int const fd, char **line)
{
	static char		*temp;
	int				i;
	char			*w;

	if (fd < 0 || !line)
		return (-1);
	i = 0;
	temp = readline(temp, fd);
	if (fd > 0)
	{
		while (temp[i] != '\0' && temp[i] != '\n')
		{
			i++;
		}
		*line = ft_strsub(temp, 0, i);
		w = ft_strdup(temp + i + 1);
		free(temp);
		temp = w;
		if (ft_strlen(temp) > 0)
			return (1);
	}
	return (0);
}
