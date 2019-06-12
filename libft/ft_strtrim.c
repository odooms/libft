/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:26:50 by odooms            #+#    #+#             */
/*   Updated: 2019/06/12 09:36:46 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		p;
	int		i;
	int 	j;
	
	if (!s)
	{
		return (0);
	}
	i = 0;
	tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	p = ft_strlen(s) - 1;
	while (s[p] == ' ' || s[p] == '\n' || s[p] == '\t')
		p--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		p++;
	j = 0;
	while (i <= p)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);

}
