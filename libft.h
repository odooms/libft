/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:22:16 by odooms            #+#    #+#             */
/*   Updated: 2019/05/24 16:02:36 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_
#include <sting.h>

void	*ft_memset(void *s, int c, size_t n);
:
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchar(const char *s, int c);
int	*ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char * dst, const char * src, size_t len);

int	ft_tolower(int a);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isalpha(int a);
int	ft_toupper(int a);

#endif
