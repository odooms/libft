/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:47:50 by odooms            #+#    #+#             */
/*   Updated: 2019/06/23 15:35:11 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len(int n)
{
	size_t	t;

	t = 1;
	while (n /= 10)
		t++;
	return (t);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			t;
	unsigned int	i;

	t = ft_len(n);
	i = n;
	if (n < 0)
	{
		i = -n;
		t++;
	}
	s = ft_strnew(t);
	if (!s)
		return (NULL);
	s[--t] = i % 10 + '0';
	while (i /= 10)
		s[--t] = i % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
