/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:55:01 by odooms            #+#    #+#             */
/*   Updated: 2019/07/04 12:04:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*readline(char *str, int fd)
{
	char	*temp;
	char	buff[BUF_SIZE + 1];
	int		ret;
	int		i;

	i = 0;
	ret = read(fd, buff, BUF_SIZE);
	buff[ret] = '\0';
	if (str == NULL)
		str = ft_strnew(1);
	while (buff[i] != '\n' && buff[i] != '\0')
		i++;
	temp = ft_strsub(buff, 0, i);
	temp = ft_strjoin(str, temp);
	return (temp);
}

int		get_next_line(int const fd, char **line)
{
	static char *temp;

	temp = NULL;
	if (fd < 0 || line ==  NULL) 
		return (-1);
	if (fd == 0)
		return (0);
	if (fd > 0)
		*line = readline(temp, fd);
	return (1);
}

int main()
{
	int		fd;
	int		nbr;
	char	*str;
	fd = open("test", O_RDONLY);
	if (get_next_line(fd, &str))
	{
		printf("%s", str);
	}
	return (0);
}
