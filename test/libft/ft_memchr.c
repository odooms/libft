/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:31:55 by odooms            #+#    #+#             */
/*   Updated: 2019/06/07 14:37:18 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *b;
	unsigned i;

	b = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (b[i] == c)
			return (b);
		i++;
	}
	return (0);
}
