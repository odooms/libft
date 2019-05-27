/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:48:45 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 13:40:31 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_isalpha(int a);

int main()
{
	char a;
	a = 'k';
	if (ft_isalpha(a))
		printf("True");
	if (!ft_isalpha(a))
		printf("False");
	return (0);
}
int	ft_isalpha(int a)
{

	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
			{
			return (1);
			}
			else
		return (0);
}
