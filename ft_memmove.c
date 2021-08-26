/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_memmove.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/26 09:11:55 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/26 10:22:28 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	if (dst > src)
		while (len--)
			dst[len] = src[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
