#include "get_next_line.h"
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int fd;
	char	*a;
	int count_lines;

	count_lines = 0;
	fd = open(av[1], O_RDONLY);
	if (fd > 0)
	{
		if (ac != 0)
		{
			while (get_next_line(fd, &a) == 1)
			{
				count_lines++;
				printf("%s", a);
				printf("%d\n",count_lines);
				free(a);
			}
			/*get_next_line(fd, &a);
			 * get_next_line(fd, &a);
			 * get_next_line(fd, &a);
			 * get_next_line(fd, &a);
			 * get_next_line(fd, &a);*/
		}
	}
	close(fd);
	return (0);
}
