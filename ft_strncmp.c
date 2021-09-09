#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	idx;

	if (!len)
		return (0);
	idx = 0;
	while (idx < (len - 1) && s1[idx] == s2[idx] && s1[idx])
		idx++;
	return ((unsigned char) s1[idx]
		- (unsigned char) s2[idx]);
}
