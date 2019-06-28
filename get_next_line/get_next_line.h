/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:37:39 by odooms            #+#    #+#             */
/*   Updated: 2019/06/28 15:28:36 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8
# include <unistd.h>

void	ft_putnbr(int n);
int		get_next_line(const int fd, char **line);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcat(char *s1, const char *s2);

#endif
