/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:42:21 by odooms            #+#    #+#             */
/*   Updated: 2019/06/15 13:37:43 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	int		i;
	int		j;

	hay = (char*)haystack;
	need = (char*)needle;
	i = 0;
	if (need[0] == '\0')
		return (hay);
	while (hay[i] && len)
	{
		j = 0;
		while (hay[i + j] == need[j] && len)
		{
			if (need[j + 1] == '\0')
				return (&hay[i]);
			j++;
			len--;
		}
		len--;
		i++;
	}
	return (NULL);
}
