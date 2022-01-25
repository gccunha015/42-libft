/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoelho- <gcoelho-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:57:40 by gcoelho-          #+#    #+#             */
/*   Updated: 2022/01/25 08:57:40 by gcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

/* Data to keep between calls */
typedef struct s_execution
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	bytes_read;
	ssize_t	start;
}	t_execution;

char	*get_next_line(int fd);

#endif
