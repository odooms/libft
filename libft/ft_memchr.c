/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:31:55 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 14:43:33 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *b;

	b = (unsigned char *)s;
	if (n != 0)
	{
		if (*b == (char)c)
			return((void)b);
		b++;
	}
	return (0);
}
