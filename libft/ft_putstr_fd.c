/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:40:33 by odooms            #+#    #+#             */
/*   Updated: 2019/06/10 08:47:20 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;
	i = 0;
	while (s[i] != '\0' && s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}	
}
