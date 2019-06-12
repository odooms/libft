/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:57:02 by odooms            #+#    #+#             */
/*   Updated: 2019/06/12 13:27:19 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int t;

	t = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		t = -n;
	}
	if (t >= 10)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putnbr_fd((t % 10), fd);
	}
	if (t < 10)
		ft_putchar_fd((t + 48), fd);
}
