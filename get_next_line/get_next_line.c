/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/03 16:29:56 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

/*char	*readline(char *str, int fd)
{
	char	buff[BUF_SIZE + 1];
	int		ret;

	while (ret)
	{
		ret = read(fd, buff, BUF_SIZE);
	   	buff[ret] = '\0';
		str	= ft_strjoin(str, buff);
	}
	return (str);
}*/

int		get_next_line(int const fd, char **line)
{
	char	buff[BUF_SIZE + 1];
	char	*str;
	char 	*temp;
	char	*c;
	int		ret;

	if (fd < 0 || line ==  NULL) 
		return (-1);
	if (fd > 0)
	{
		while (ret)
		{
			ret = read(fd, buff, BUF_SIZE);
			buff[ret] = '\0';
			str = ft_strjoin(buff, str);
			ft_putstr(str);
		}
		return (0);
	}
	return (0);
}

int main()
{
	int		fd;
	int 	nbr;
	char	**str;
	char	c[30];
	char	*s1;
	fd = open("/div/test2", O_RDONLY);
	nbr = get_next_line(fd, str);
	if (fd < 0)
		ft_putnbr(nbr);
	else
	{	
		ft_putnbr(nbr);
		ft_putstr(s1);
	}
	close(fd);
	return (0);
}
