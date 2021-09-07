#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = dst;
	p_src = src;
	if (dst > src)
		while (len--)
			p_dst[len] = p_src[len];
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
