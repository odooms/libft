/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:48:31 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 09:03:45 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_strcmp(const char *s1, const char *s2);
int main()
{
	printf(" %d\n", ft_strcmp("a", "a"));
	return (0);
}

int ft_strcmp(const char *s1, const char *s2)
{
	while((*s1 == '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if(*s1 == *s2)
	{
		return 0;
	}
	else
	{
		return (*s1 - *s2);
	}
}
