/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:44:54 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 13:59:53 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)

{
	if (needle == NULL || haystack == NULL)
	{
		return NULL;
	}
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && ft_strcmp(haystack, needle))
			return haystack;
		haystack++;
	}
	return (0);
}
