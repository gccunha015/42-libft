/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcat.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/30 16:01:25 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/30 16:29:30 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size	dst_len;
	t_size	idx;

	dst_len = ft_strlen(dst);
	idx = -1;
	while (++idx < (dstsize - dst_len - 1) && src[idx])
		dst[dst_len + idx] = src[idx];
	if (dst_len < dstsize)
		dst[idx] = '\0';
	return (dst_len + ft_strlen(src));
}
