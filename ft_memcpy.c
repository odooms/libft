/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:55:56 by odooms            #+#    #+#             */
/*   Updated: 2019/06/03 16:29:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *c1;
	char *c2;
	if (n == 0 || dest == src)
		return (s1);
	c1 = (char *)dest;
	c2 = (char *)src;
	while (--n)
	{
		*c1++ = *c2++;
		*c1 = *c2
	}
	return (dest);
}
