#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (!dst && !src)
		return (NULL);
	p_dst = dst;
	p_src = src;
	while (len--)
		*(p_dst++) = *(p_src++);
	return (dst);
}
