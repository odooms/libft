/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/03 10:47:24 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include "get_next_line.h"
#include <stdio.h>
#define BUF_SIZE 30

char	*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	while (ret)
	{
		ret = read(fd, buff, BUFF_SIZE);
	   	buff[ret] = '\0';
		str	= ft_strjoin(str, buff);
	}
	return (str);
}

/*int	get_next_line(int const fd, char **line)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char 	*temp;
	char	str;

	if (fd <= 0 || line ==  NULL) 
		return (-1);
	if (fd > 0)
	{
		temp = *readline(&str, fd);
		ft_putstr(temp);
		return (1);
	}
	return (0);
}*/

int main()
{
	char	c[30];
	int fd = open("test2", O_RDONLY);
	printf("%s", readline(c, fd));
	return (0);
}
