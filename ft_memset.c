/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:48:16 by odooms            #+#    #+#             */
/*   Updated: 2019/06/03 15:46:29 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *a;
	if (len == 0)
		return (b);
	a = (char *)b;
	while (len--)
	{
		*a = (char)c
			if (len)
				a++;
	}
	return (b);
}
