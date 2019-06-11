/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:10:27 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 15:48:52 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;
	int		b;

	str = *s;
	i = 0;
	while (*str != '\0')
	{
		if (str == c)
		{
			b = i;
		}
		str++;
		i++;
	}
	if (b == -1)
	{
		return NULL;
	}
	while (b < strlen(s))
	{
		*a = strlen(b);
		a++;
		b++;
	}
	return (a);
}
