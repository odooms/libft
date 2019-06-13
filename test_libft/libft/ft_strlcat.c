/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:18:24 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 13:47:47 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	size_t b;

	a = 0;
	b = ft_strlen(src);
	while (*dst && dstsize > 0)
	{
		dst++;
		a++;
		dstsize--;
	}
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return (b + a);
}
