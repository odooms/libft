/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/06/29 14:40:16 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#define BUF_SIZE 50

char	*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	/*while ((ret = read(fd, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}*/
	while (ret > 0)
	{
		ret = read(fd, buff, BUF_SIZE);
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}
/*int	get_next_line(const int fd, char **line)
{
}*/
int main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open("test", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open()failed\n");
		return (1);
	}
	while (ret)
	{	
		/*ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';*/
		ft_putnbr(ret);
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed");
		return (1);
	}
	return (0);

}
