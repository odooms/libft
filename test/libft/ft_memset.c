/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:48:16 by odooms            #+#    #+#             */
/*   Updated: 2019/06/06 15:49:53 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t 			a;
	unsigned char	*p;

	a = 0;
	p = (unsigned char *)b;
	while (a < len)
	{
		*p = c;
		p++;
		a++;
	}
	return (b);
}
