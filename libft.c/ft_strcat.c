/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:17:38 by odooms            #+#    #+#             */
/*   Updated: 2019/05/22 16:24:16 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
	char *ret = dest;
	while (*dest)
		dest++;
	while (*dest++ = src++);
	return ret;
}
