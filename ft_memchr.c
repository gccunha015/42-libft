/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_memchr.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/09/02 10:20:41 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/09/02 15:50:55 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	idx;

	idx = -1;
	while (++idx < len)
		if (((const unsigned char *) b)[idx] == (unsigned char) c)
			return ((void *) &b[idx]);
	return (NULL);
}
