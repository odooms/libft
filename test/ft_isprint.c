/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:34:55 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 15:39:07 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int    ft_isprint(int a);

int main()
{
    char a;
    a = 'k';
    if (ft_isprint(a))
        printf("True");
    if (!ft_isprint(a))
        printf("False");
    return (0);
    
}
int    ft_isprint(int a)
{
    if (a >= 32 && a <= 126)
    {
        return (1);
    }
    else
        return (0);
}

