/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:15:39 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 13:15:52 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_isdigit(int a);

int	main()
{
    char a;
    a = '8';
    if (ft_isdigit(a))
        printf("True");
    if (!ft_isdigit(a))
        printf("False");
    return (0);
}
int	ft_isdigit(int a)
{
	if ((a >= 48) && (a <= 57))
	{
		return (1);
	}
	else
		return (0);
}
