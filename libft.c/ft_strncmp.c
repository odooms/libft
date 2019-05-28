/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:02:12 by odooms            #+#    #+#             */
/*   Updated: 2019/05/28 09:56:36 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((*s1 == '\0' && *s2 != '\0') ||(*s1 != '\0' && *s2 == '\0'))
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		while (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && (i < n && i != n -1)
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
