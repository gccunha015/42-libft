/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strnstr.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/09/03 08:03:14 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/09/03 15:22:58 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!ft_strlen(little))
		return ((char *) big);
	while (len && ft_strncmp(big, little, len--))
		big++;
	if (len && !ft_strncmp(big, little, len))
		return ((char *) big);
	return (NULL);
}
