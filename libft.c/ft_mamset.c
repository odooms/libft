/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mamset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:48:16 by odooms            #+#    #+#             */
/*   Updated: 2019/05/21 12:54:11 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void * s, int c, size_t n)
{
	unsigned char* p=s;
	while(n--)
		*p++ = (unsigned char)c;
	return a;
}
