/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:26:12 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 14:45:18 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int a);

int main()
{
	printf("%c\n", ft_tolower('s'));
    return (0);
}
int ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
	{
		a = a + 32;
	}
	return (a);
}
