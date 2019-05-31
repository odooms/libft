/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:39:43 by odooms            #+#    #+#             */
/*   Updated: 2019/05/30 10:05:59 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	if (dest && src)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i]
			{
				if (src[i] == c)
					return(*dest + 1 + i + 1 );
				i++;
			}
		}
	}
	return (0);
}
