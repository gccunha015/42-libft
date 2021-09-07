#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!ft_strlen(little))
		return ((char *) big);
	while (len && ft_strncmp(big, little, len--))
		big++;
	if (len && !ft_strncmp(big, little, len))
		return ((char *) big);
	return (NULL);
}
