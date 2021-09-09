#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	iteration;

	if (!s)
		return ;
	iteration = -1;
	while (s[++iteration])
		f(iteration, &s[iteration]);
}
