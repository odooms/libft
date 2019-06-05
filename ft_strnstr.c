/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:40:08 by odooms            #+#    #+#             */
/*   Updated: 2019/06/05 11:02:38 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;
	size_t j;

	i = 0;
	n = 0
	j = 0;
	while (haystack[i] != '\0' && needle[n] != '\0') && (i < len)
	{
		if (haystack[i] == needle[n])
			i++;
		n++;
	}
	if (n == ft_strlen(needle)
			{
			while(j < (i - n))
			{
			haystack++;
			j++;
			{
			return (*h);
			}
			else
			return (0);
			}
			}
		
}
