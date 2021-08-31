/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcat.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/30 16:01:25 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/31 15:04:14 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size	dst_len;
	t_size	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize || dst_len >= dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
