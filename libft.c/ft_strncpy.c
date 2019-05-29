/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:26:44 by odooms            #+#    #+#             */
/*   Updated: 2019/05/29 12:35:15 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strncpy(char *dst, const char *src, size_t len);
int main()
{
	char src[20] = "awesome strncpy", dst[10] = "this is ";
	ft_strncpy(src, dst, 8);
	printf("src : %s", src);
	return (0);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while((i < len) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}return (0);
}
