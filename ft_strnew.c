/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:33:28 by odooms            #+#    #+#             */
/*   Updated: 2019/07/26 13:21:34 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*t;

	if (!(t = (char *)malloc(sizeof(char ) * size + 1)))
	{
		return (NULL);
	}
	ft_bzero(t, size + 1);
	return (t);
}
