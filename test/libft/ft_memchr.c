/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:31:55 by odooms            #+#    #+#             */
/*   Updated: 2019/06/06 15:45:14 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *b;
	unsigned i;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return ((void *) b[i]);
		i++;
	}
	return (0);
}
