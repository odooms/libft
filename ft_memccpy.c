/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:39:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/24 16:24:03 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;
	unsigned char	t;

	i = 0;
	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	t = (unsigned char)c;
	while (i < n)
	{
		c1[i] = c2[i];
		while (c2[i] == t)
		{
			c1[i] = c2[i];
			i++;
			return (c1 + i);
		}
		i++;
	}
	return (NULL);
}
