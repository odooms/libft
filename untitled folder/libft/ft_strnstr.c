/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:42:21 by odooms            #+#    #+#             */
/*   Updated: 2019/06/14 14:08:31 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	i;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	if (haystack[i] == '\0' || len == 0)
	{
		return (NULL);
	}
	if (haystack[i] == needle[i])
	{
		if (ft_strnstr (haystack + 1, needle + 1, len - 1))
		{
			return ((char*)haystack);
		}
		return (ft_strnstr(haystack + 1, needle, len - i));
	}
	return (0);
}
