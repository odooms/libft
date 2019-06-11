/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:11:56 by odooms            #+#    #+#             */
/*   Updated: 2019/06/08 13:56:19 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (d == 0 && s == 0)
	{
		return (0);
	}
	else if (d <= s || s >= (d + len))
	{
		while (len--)
			*d++ = *s++;
	}
	else 
	{
		d = d + len - 1;
		s = s + len - 1;

		while (len--)
			*d-- = *s--;
	}
	return (dst);

}
