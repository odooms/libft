/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:33:52 by odooms            #+#    #+#             */
/*   Updated: 2019/06/24 16:22:03 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
