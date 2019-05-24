/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:26:44 by odooms            #+#    #+#             */
/*   Updated: 2019/05/24 14:51:04 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	i = 0;
	while((i < len) && (src[i] = '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
}
return (dst);
