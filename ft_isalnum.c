/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:43:39 by odooms            #+#    #+#             */
/*   Updated: 2019/05/27 13:55:38 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if (a >= 56 && a <= 122)
	{
		return (1);
	}
	else
		return (0);
}
