/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcpy.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/30 14:02:17 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/31 15:40:36 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	src_len;

	src_len = ft_strlen(src);
	if (src_len < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}
