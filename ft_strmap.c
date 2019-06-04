
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *c;

	if (s == 0 || f == 0)
		return (0);
	c = (char *)malloc(sizeof(char *)ft_strlen(s) + 1);
	if (c == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		c[i] = f(s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
