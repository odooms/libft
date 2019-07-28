/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:14:46 by odooms            #+#    #+#             */
/*   Updated: 2019/07/28 14:49:04 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*saveline(char *str, char **line)
{
	size_t		i;
	char		*temp;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	*line = ft_strsub(str, 0, i);
	if (str[i] == '\0')
		ft_strdel(&str);
	else
	{
		temp = str;
		str = ft_strdup(str + i + 1);
		free(temp);
	}
	return (str);
}

int			get_next_line(int const fd, char **line)
{
	int				ret;
	static char		*str[1024];
	char			*temp;
	char			buff[BUFF_SIZE + 1];

	if (BUFF_SIZE < 1 || fd < 0 || !line || (read(fd, buff, 0) < 0))
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while (!ft_strchr(str[fd], '\n') && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		temp = str[fd];
		str[fd] = ft_strjoin(str[fd], buff);
		free(temp);
	}
	if (ret == 0 && ret < BUFF_SIZE && str[fd][0] == '\0')
		return (0);
	str[fd] = saveline(str[fd], line);
	return (1);
}
