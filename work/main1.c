/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:00:31 by odooms            #+#    #+#             */
/*   Updated: 2019/07/16 10:04:35 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int		fd;
	int		nbr;
	char	*str;

	nbr = 2;
	fd = open("test", O_RDONLY);
	while (nbr > 0)
	{
		nbr = get_next_line(fd, &str);
		printf("%s\n", str);
		printf("%d\n", nbr);
	}
	close(fd);
	return (0);
}
