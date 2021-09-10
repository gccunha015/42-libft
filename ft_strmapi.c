#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	idx;

	if (!s)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	idx = -1;
	while (s[++idx])
		result[idx] = f(idx, s[idx]);
	result[idx] = '\0';
	return (result);
}
