/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:17:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/24 16:49:14 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int		i;
	int		t;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			t++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (t);
}

static	int		ft_countlen(const char *s, int start, char c)
{
	int		i;

	i = 0;
	while (s[start] != c && s[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**s1;
	int		i;
	int		t;
	int		e;

	if (s)
	{
		i = ft_count(s, c);
		if (!(s1 = (char **)malloc(sizeof(char *) * i + 1)))
			return (NULL);
		t = 0;
		e = 0;
		while (t < i)
		{
			while (s[e] == c && s[e] != '\0')
				e++;
			s1[t] = ft_strsub(s, e, ft_countlen(s, e, c));
			while (s[e] != c && s[e] != '\0')
				e++;
			t++;
		}
		s1[t] = NULL;
		return (s1);
	}
	return (NULL);
}
