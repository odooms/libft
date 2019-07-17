/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:49:40 by odooms            #+#    #+#             */
/*   Updated: 2019/07/16 17:36:24 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	readline(char **temp, int fd)
{
    char		temp2[BUFF_SIZE + 1];
	//static char		*temp3;
    int			ret;
	char *line;
	
	ft_putendl("-----------------------------------------------------------");
	if (*temp == NULL)
		*temp = ft_strnew(0);
//	ft_putstr("readline 1\n");
	while (!ft_strchr(*temp, '\n') && (ret = read(fd, &temp2, BUFF_SIZE)) > 0)
	{
//		ft_putnbr(ret);
		temp2[ret] = '\0';
		ft_putstr(temp2);
		line = ft_strjoin(*temp, temp2);
		free(*temp);
		*temp = ft_strdup(line);
		free(line);
		line = NULL;
	}
	//ft_putendl("-----------------------------------------------------------");
	return (ret);
}

static	int	saveline(char **temp, char **line, int fd)
{
    int			i;
    char		*w;
	char *iter = *temp;

	i = 0;
	if (*temp[0] == '\0')
		return (-1);
	while (*iter != '\n' && *iter != '\0')
	{
		i++;
		iter++;
	}
	w = *temp;
	if (*iter == '\n')
	{
	//	ft_putstr(w);
		*line = ft_strsub(*temp, 0, i);
		*temp = ft_strdup(w + i + 1);
	}
	else if (*iter == '\0')
	{
	//	ft_putstr(w);
		*line = ft_strdup(*temp);
		*temp = ft_strdup(w + 1);
		free(*temp);
	}
	free(w);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
    static char	*temp;
    int			i;
    int			x;

	if (fd < 0 || !BUFF_SIZE || line == NULL ||
			!(*line = ft_strnew(BUFF_SIZE + 1)) ||
			(i = readline(&temp, fd)) < 0)
	{
		return (-1);
	}
	if (i == 0 && temp[0] == '\0')
		return (0);
	x = saveline(&temp, line, fd);
	return (x);
}
