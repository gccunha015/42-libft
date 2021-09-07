#include "libft.h"

char	*ft_strdup(const char *str)
{
	return (ft_substr(str, 0, ft_strlen(str)));
}
