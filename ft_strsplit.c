/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:17:43 by odooms            #+#    #+#             */
/*   Updated: 2019/06/16 14:56:47 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(const char *s, char c)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			t++;
		}
		i++;
	}
	return (t);
}
static int	ft_countlen(const char *s, int start, char c)
{
	int i;

	i = 0;
	while (s[start] != c && s[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}
char	**ft_strsplit(const char *s, char c)
{
	char	**s1;
	int		i;
	int		t;
	int		e;

	i = ft_count(s, c);
	s1 = (char **)malloc(sizeof(char *) * i + 1);
	t = 0;
	e = 0;
	while (t < i)
	{
		while (s[e] == c && s[e] != '\0')
			e++;
		s1[t] = ft_strsub(s, e, ft_countlen(s, e, c));
		while (s[e] == c && s[e] != '\0')
			e++;
		t++;
	}
	s1[t] = NULL;
	return (s1);
}
