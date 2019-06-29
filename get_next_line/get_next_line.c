/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/06/29 14:53:50 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#define BUF_SIZE 34

char	*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	while(ret)
	{
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';
		str = ft_strjoin(str, & buff[ret]);
	}
	return(str);
}
int main()
{
	int fd;
	int ret;
	char buf;

	fd = open("test", O_RDONLY);
	ft_putnbr(ret);
	ft_putstr(&buf);
	return (0);

}
