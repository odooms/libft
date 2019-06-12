/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:44:54 by odooms            #+#    #+#             */
/*   Updated: 2019/06/12 14:46:56 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)

{
	int i;
	char *c;

	i = ft_strlen(needle);
	*c = substr;
	while (*haystack && *c)
	{
		if (*haystack++ == *c)
		{
			c++;
		}
		if(!*c)
		{
			return (str - i);
		}
		if (i == (c - needle))
		{
			c = needle
		}
	}
	return (0);
}
