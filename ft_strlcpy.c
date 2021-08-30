/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcpy.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/30 14:02:17 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/30 14:22:21 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	idx;

	idx = -1;
	while (++idx < (dstsize - 1) && src)
		dst[idx] = src[idx];
	if (dstsize)
		dst[idx] = '\0';
	return (ft_strlen(src));
}
