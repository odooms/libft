/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:26:50 by odooms            #+#    #+#             */
/*   Updated: 2019/06/18 09:39:59 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	int		i;
	int		a;
	int		j;

	if (s == 0)
		return (NULL);
	if (!(s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	a = ft_strlen(s) - 1;
	if (s1)
	{
		while (s[a] != '\0' && (s[a] == ' ' || s[a] == '\t' || s[a] == '\n'))
			a--;
		i = 0;
		while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		j = 0;
		while (i <= a)
			s1[j++] = s[i++];
		s1[j] = '\0';
		return (s1);
	}
	return (0);
}
