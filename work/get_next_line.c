/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:49:40 by odooms            #+#    #+#             */
/*   Updated: 2019/07/16 16:08:18 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	readline(char **line, char **temp, int fd)
{
    char		*temp2;
    int			ret;
	
	ft_putstr("Readline\n");
	if (temp[fd] == NULL)
		temp[fd] = ft_strnew(1);
	ft_putstr("readline 1\n");
	while (!(ft_strchr(temp[fd], '\n')) &&
			(ret = read(fd, *line, BUFF_SIZE)) > 0)
	{
		ft_putendl(temp[fd]);
		temp2 = ft_strjoin(temp[fd], *line);
		ft_putstr("readline 3");
		free(temp[fd]);
		temp[fd] = temp2;
		ft_putstr("readline 4");
	}
	ft_putendl("out readline");
	return (ret);
}

static	int	saveline(char **temp, char **line, int fd)
{
    int			i;
    char		*w;

    ft_putstr("saveline");
	i = 0;
	if (temp[fd][0] == 0)
		return (-1);
	while (temp[fd][i] != '\n' && temp[fd][i] != '\0')
		i++;
	w = temp[fd];
	if (temp[fd][i] == '\n')
	{
		ft_putstr(w);
		*line = ft_strsub(temp[fd], 0, i);
		temp[fd] = ft_strdup(w + i + 1);
	}
	else if (temp[fd][i] == '\0')
	{
		ft_putstr(w);
		*line = ft_strdup(temp[fd]);
		temp[fd] = ft_strdup(w + 1);
		free(temp[fd]);
	}
	free(w);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
    static char	*temp[100000];
    int			i;
    int			x;

	if (fd < 0 || !BUFF_SIZE || line == NULL ||
			!(*line = ft_strnew(BUFF_SIZE + 1)) ||
			(i = readline(line, temp, fd)) < 0)
	{
		return (-1);
	}
	if (i == 0 && temp[fd][0] == '\0')
		return (0);
	x = saveline(temp, line, fd);
	return (x);
}
