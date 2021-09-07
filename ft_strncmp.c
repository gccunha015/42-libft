#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	idx;

	idx = -1;
	while (++idx < len && s1[idx] && s2[idx])
		if (s1[idx] != s2[idx])
			return ((unsigned char) s1[idx]
				- (unsigned char) s2[idx]);
	return (0);
}
