/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:49:40 by odooms            #+#    #+#             */
/*   Updated: 2019/07/20 14:59:20 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int			readline(char **temp, int fd)
{
	char			temp2[BUFF_SIZE + 1];
	int				ret;
	char			*line;

	if (*temp == NULL)
		*temp = ft_strnew(0);
	while (!ft_strchr(*temp, '\n') && (ret = read(fd, &temp2, BUFF_SIZE)) > 0)
	{
		temp2[ret] = '\0';
		line = ft_strjoin(*temp, temp2);
		free(*temp);
		*temp = NULL;
		*temp = ft_strdup(line);
		free(line);
		line = NULL;
	}
	return (ret);
}

static	int			saveline(char **temp, char **line)
{
	int				i;
	char			*w;
	char			*str;

	str = *temp;
	i = 0;
	while (*str != '\n' && *str != '\0')
	{
		i++;
		str++;
	}
	w = *temp;
	if (*str == '\n')
	{
		*line = ft_strsub(*temp, 0, i);
		*temp = ft_strdup(w + i + 1);
	}
	else if (*str == '\0')
	{
		*line = ft_strdup(*temp);
		*temp = ft_strdup(w + 1);
		free(*temp);
	}
	free(w);
	return (1);
}

int					get_next_line(int const fd, char **line)
{
	static char		*temp;
	int				i;
	int				x;

	if (fd < 0 || line == NULL ||
			!(*line = ft_strnew(BUFF_SIZE + 1)) ||
			(i = readline(&temp, fd)) < 0)
	{
		return (-1);
	}
	if (i == 0 && temp[0] == '\0')
		return (0);
	x = saveline(&temp, line);
	return (x);
}
