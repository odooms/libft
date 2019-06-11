/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:33:52 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 16:19:58 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t len)
{
	char	*t;
	size_t	i;

	if ((t = malloc(len)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}