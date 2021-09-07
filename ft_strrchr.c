#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;

	idx = ft_strlen(s) + 1;
	while (--idx > 0)
		if (s[idx] == (char) c)
			return ((char *) &s[idx]);
	if (s[idx] == (char) c)
		return ((char *) &s[idx]);
	return (NULL);
}
