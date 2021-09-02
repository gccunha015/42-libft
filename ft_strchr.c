/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strchr.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/09/02 10:20:41 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/09/02 14:03:27 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;
	size_t	idx;

	s_len = ft_strlen(s);
	idx = -1;
	while (++idx <= s_len)
		if (s[idx] == c)
			return ((char *) &s[idx]);
	return (NULL);
}
