#include "libft.h"

static size_t	determine_len(int n);
static void		convert(unsigned int un, char *str, size_t len);

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = determine_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	convert((unsigned int) n, str, --len);
	return (str);
}

static void	convert(unsigned int un, char *str, size_t len)
{
	if (un > 9)
		convert(un / 10, str, len - 1);
	str[len] = (un % 10) + '0';
}

static size_t	determine_len(int n)
{
	size_t			len;
	unsigned int	un;

	len = 1;
	if (n < 0)
		len++;
	un = (unsigned int) n;
	while (un > 9)
	{
		un /= 10;
		len++;
	}
	return (len);
}
