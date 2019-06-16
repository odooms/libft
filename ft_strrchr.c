/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:10:27 by odooms            #+#    #+#             */
/*   Updated: 2019/06/14 16:46:23 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	t;

	t = ft_strlen(s);
	while (t >= 0)
	{
		if (s[t] == (char)c)
		{
			return ((char*)s + t);
		}
		--t;
	}
	if (s[t] == (char)c)
	{
		return ((char*)s + 1);
	}
	return (0);
}
