/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:04:31 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 15:29:49 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strcat(char *s1, const char *s2);
int main()
{
    printf(" %s\n", ft_strcat("abc", "abe"));
    return (0);
}
char	*ft_strcat(char *s1, const char *s2)
{
	char *a;

	a = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (a);
}
