/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:11:56 by odooms            #+#    #+#             */
/*   Updated: 2019/06/06 14:46:50 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*new_dst;
	char	*new_src;
	size_t	i;

	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	i = 0;
	if (new_src[i] < new_dest[i])
	{
		while (i < len)
		{
			new_dst[i] = new_src[i];
			i++;
		}
		return (dst);

}
