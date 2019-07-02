/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/02 16:48:05 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include "get_next_line.h"
#include <stdio.h>
/*#define  BUFF_SIZE 30*/


char	*readline(int fd, char *str)
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

int	get_next_line(int const fd, char **line)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char 	*temp;

	if (fd <= 0 || line ==  NULL) 
		return (-1);
	return (0);
}

int main()
{
	int		fd;
	int		nbr;
	char	*tem;
	char	*s1;
	fd = open("test2", O_RDONLY);
	nbr = get_next_line(fd, &tem);
	ft_putstr(s1 = readline(fd, s1));	
	ft_putnbr(nbr);
	close(fd);
	return (0);
}
