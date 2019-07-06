/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/06 07:29:41 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

char	*readline(char *temp, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (temp == NULL)
		temp = ft_strnew(1);
		buff[ret] = '\0';
		temp = ft_strjoin(temp, buff);
		if (ft_strchr(temp, '\n') != NULL)
			break ;
	}
	return (temp);
}

int		get_next_line(int const fd, char **line)
{
	static char	*temp;
	int 		i;
	char		*w;
	int			ret;

	i = 0;
	temp = readline(temp, fd);;
	if (fd < -1 || !line)
		return (-1);

	else if (fd > 0)
	{
		while (temp[i] != '\0' && temp[i] != '\n')
		{
			i++;
		}
		(*line) = ft_strsub(temp, 0, i);
		w = ft_strdup(temp + i + 1);
		free(temp);
		temp = w;
		if(ft_strlen(temp) > 0)
			return(1);
	}
//	else if (ret == 0  && temp[0] == '\0')
		return (0);
//	return (get_next_line(fd, &line));
}

int main()
{
	int		fd;
	int		nbr;
	char	*str;
	int		i;
	char	*x;

	i = 6;
	fd = open("test", O_RDONLY);
	nbr = get_next_line(fd, &str);
	printf("%s\n", str);
	printf("%d\n", nbr);
	return (0);
}
