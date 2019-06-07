/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:39:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/07 15:02:44 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	i;

	i = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c1[i] == c)
			return (c1 + i + 1);
		i++;
	}
	return (0);
}
