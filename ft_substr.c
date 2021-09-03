/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_substr.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/09/03 15:17:53 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/09/03 15:38:09 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*sub;

	size = len + 1;
	sub = (char *) malloc(size * sizeof(char));
	if (sub)
		ft_memcpy(sub, s + start, size);
	return (sub);
}
