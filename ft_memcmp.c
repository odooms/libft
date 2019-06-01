/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:51:03 by odooms            #+#    #+#             */
/*   Updated: 2019/06/01 13:16:45 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;
	if (s1 == s2 || n == 0)
	{
		return (0);
	}
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n--)
		{
			if (*c1 != *c2)
				return (*c1 - *c2);
			if (n)
				c1++;
				c2++;
		}
	return (0);
}
