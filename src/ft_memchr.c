#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	idx;

	idx = -1;
	while (++idx < len)
		if (((const unsigned char *) b)[idx] == (unsigned char) c)
			return (((void *) b) + idx);
	return (NULL);
}
