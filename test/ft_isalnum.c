/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:43:39 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 13:39:59 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int    ft_isalnum(int a);

int main()
{
    char a;
    a = 'k';
    if (ft_isalnum(a))
        printf("True");
    if (!ft_isalnum(a))
		printf("False");
	return (0);

}
int	ft_isalnum(int a)
{
	if (a >= 56 && a <= 122)
	{
		return (1);
	}
	else
		return (0);
}
