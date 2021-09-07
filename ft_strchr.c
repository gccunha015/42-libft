#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;
	size_t	idx;

	s_len = ft_strlen(s);
	idx = -1;
	while (++idx < s_len)
		if (s[idx] == (char) c)
			return ((char *) &s[idx]);
	if (s[idx] == (char) c)
		return ((char *) &s[idx]);
	return (NULL);
}
