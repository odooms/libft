/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:37:53 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 14:05:40 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int    ft_isascii(int a);

int main()
{
    char a;
    a = '$';
    if (ft_isascii(a))
        printf("True");
    if (!ft_isascii(a))
        printf("False");
    return (0);
}
int	ft_isascii(int a)
{
	if (a >= 0 && a <= 177)
	{
		return (1);
	}
	else
		return(0);
}