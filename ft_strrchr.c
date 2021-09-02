/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strrchr.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/09/02 10:20:41 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/09/02 15:43:39 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;

	idx = ft_strlen(s) + 1;
	while (--idx >= 0)
	{
		if (s[idx] == (char) c)
			return ((char *) &s[idx]);
		if (idx == 0)
			break ;
	}
	return (NULL);
}
