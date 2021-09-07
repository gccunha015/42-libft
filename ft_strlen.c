#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = -1;
	while (s[++len])
		;
	return (len);
}
