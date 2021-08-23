/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_isalpha.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/23 09:38:07 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/23 10:41:52 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c);
int	ft_islower(int c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
