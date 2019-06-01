/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:48:16 by odooms            #+#    #+#             */
/*   Updated: 2019/06/01 13:17:30 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;
	if (len == 0)
		return (b);
	a = (unsigned char *)b;
	while (len--)
	{
		*a = (unsigned char)c
			if (len)
				w++;
	}
	return (b);
}
