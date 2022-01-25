#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s)
		s++;
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
