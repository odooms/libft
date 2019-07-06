#include "get_next_line.h"
#include <stdio.h>

int	readline(char *str, int fd)
{
	char	*temp;
	char	buff[BUF_SIZE + 1];
	int		ret;

	while (ret)
	{
		ret = read(fd, buff, BUF_SIZE);
	   	buff[ret] = '\0';
		temp = ft_strjoin(str, buff);
		printf("%s", temp);
		return (1);
	}
	return (0);
}

int		main(void)
{
	char	*str;
	int fd = open("test2", O_RDONLY);
	int test = readline(str, fd);
	if (test == 1)
		printf("It Worked!");
	return (0);
}
