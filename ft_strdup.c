/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:23:09 by odooms            #+#    #+#             */
/*   Updated: 2019/06/03 15:44:51 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char s2;
	char i;

	i = 0;
	s2 = *s1;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (0);
}
