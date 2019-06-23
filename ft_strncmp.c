/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:02:12 by odooms            #+#    #+#             */
/*   Updated: 2019/06/23 15:27:07 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*n_s1;
	unsigned char	*n_s2;
	size_t			i;

	i = 0;
	n_s1 = (unsigned char*)s1;
	n_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n_s1[i] != '\0' && n_s2[i] != '\0' &&
			i < n - 1 && n_s1[i] == n_s2[i])
		i++;
	return (n_s1[i] - n_s2[i]);
}
