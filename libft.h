/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:22:16 by odooms            #+#    #+#             */
/*   Updated: 2019/06/04 12:02:40 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_
#include<unistd.h>
#include<stdlib.h>

int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);

char	*ft_strcat(char	*s1, const	char *s2);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
ft_strdup;
ft_strncmp;
ft_strncpy;
ft_strnstr;
ft_strstr;

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_memcmp(onst void *s1, const void *s2, size_t n);
int ft_tolower(int c);
int ft_tolower(int c);
void	*ft_memalloc(size_t len);

/* part 2*/
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);

char	*ft_strnew(size_t len);
void	ft_striter(char *s, void (*f)(char *);
		int	ft_strequ(char const *s1, char const *s2)
		void	ft_stristri(char *s, void (*f)(unsigned int, char *));
		char	*ft_strmap(char const *s, char (*f)(char));
		char	ft_strmapi(char const *s, char (*f)(unsigned int, char));
		int ft-strnequ(char const *s1, char const *s2, size_t n);
		char	*ft_strnew(size_t size);
		
#endif
