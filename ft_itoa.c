#include "libft.h"

static size_t	determine_len(unsigned int un);
static char		*allocate_memory(unsigned int un, size_t *len);
static void		convert(unsigned int un, char *str, size_t len);

char	*ft_itoa(int n)
{
	unsigned int	un;
	size_t			len;
	char			*str;

	len = 0;
	un = n;
	if (n < 0)
	{
		un *= -1;
		len = 1;
		str = allocate_memory(un, &len);
		str[0] = '-';
	}
	else
		str = allocate_memory(un, &len);
	str[len] = '\0';
	convert(un, str, --len);
	return (str);
}

static void	convert(unsigned int un, char *str, size_t len)
{
	if (un > 9)
		convert(un / 10, str, len - 1);
	str[len] = (un % 10) + '0';
}

static char	*allocate_memory(unsigned int un, size_t *len)
{
	char	*str;

	*len += determine_len(un);
	str = malloc((*len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

static size_t	determine_len(unsigned int un)
{
	size_t			len;

	len = 1;
	while (un > 9)
	{
		un /= 10;
		len++;
	}
	return (len);
}
