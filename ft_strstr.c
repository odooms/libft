/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:44:54 by odooms            #+#    #+#             */
/*   Updated: 2019/05/28 10:33:51 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)

{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	n = 0;
	j = 0;
	while (haystack[i] == '\0' && needle[i] == '\0')
	{
		if (haystack[i] == needle[n])
			n++;
		i++;
	}
	if (n == ft_strlen(needle))
	{
	   	while j < (i - n)
		{
			haystack++;
			j++;
		}
		return (*haystack);
	}
	else
		return (0);
}
