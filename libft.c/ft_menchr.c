/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:10:21 by odooms            #+#    #+#             */
/*   Updated: 2019/05/28 09:29:57 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, size_t n)
{
	char	*a
	size_t	i;
	a = *s;
	i = -1;
	while(++i < n)
	{
		if (*a + i) == c)
		{
			return ((void *a + i);
					}
					return (NULL)
	}
}
