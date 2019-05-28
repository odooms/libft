/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:48:52 by odooms            #+#    #+#             */
/*   Updated: 2019/05/28 16:03:09 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strcpy(char *dest, const char *src);
int	main()
{
	printf("%s\n", ft_strcpy("a", "z"));
	return(0);
}
char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	char *a;
	
	a = dest;
	i = 0;
	while (src[i] != '\0')
	{
		(dest[i] = src[i]);
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (a);
}
