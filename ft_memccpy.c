/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:39:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/13 16:27:32 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;
	unsigned char	t;

	i = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	t = (unsigned char)c;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c1[i] == t)
			return (c1 + i + 1);
		i++;
	}
	return (0);
}
