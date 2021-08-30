/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_memset.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/24 15:36:25 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/30 07:57:34 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, t_size len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len--)
		*(ptr++) = (unsigned char) c;
	return (dest);
}
