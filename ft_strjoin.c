#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	size;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	size = s1_len + ft_strlen(s2) + 1;
	join = (char *) malloc(size * sizeof(char));
	if (join)
	{
		ft_memcpy(join, s1, s1_len);
		ft_strlcat(join, s2, size);
	}
	return (join);
}
