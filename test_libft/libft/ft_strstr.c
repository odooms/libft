/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:44:54 by odooms            #+#    #+#             */
/*   Updated: 2019/06/13 14:06:27 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)

{
	size_t len;
	
	if (!(len = ft_strlen(needle)))
		return ((char*)haystack);
	while (*haystack)
	{
		if (haystack == *needle && !(ft_memcmp(haystack, needle, len)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
