/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:55:56 by odooms            #+#    #+#             */
/*   Updated: 2019/05/25 12:58:35 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char str1;
	char str2;

	if	(dest && src)
	{
		i = 0;
		str1 = *dest;
		str2 = *src;
		while(i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
