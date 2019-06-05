/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:39:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/05 13:05:17 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	a;

	if (dest == src || n == 0)
		return (dest);
	a = 0;
	c1 = (char *)dest;
	c2 = (char *)src;
	while (a < n)
	{
		c1[a] = c2[a];
		if (c1[a] == c)
			return (c1 + a + 1);
		a++;
	}
	return (0);
}
