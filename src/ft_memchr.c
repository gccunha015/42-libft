/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoelho- <gcoelho-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:57:40 by gcoelho-          #+#    #+#             */
/*   Updated: 2022/01/25 08:57:40 by gcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	idx;

	idx = -1;
	while (++idx < len)
		if (((const unsigned char *) b)[idx] == (unsigned char) c)
			return (((void *) b) + idx);
	return (NULL);
}
