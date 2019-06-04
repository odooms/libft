/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:56:50 by odooms            #+#    #+#             */
/*   Updated: 2019/06/04 13:47:09 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s || f)
	{
		i = 0;
		while(*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
