/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlen.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/24 15:14:19 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/25 13:22:36 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *s)
{
	t_size	size;

	size = -1;
	while (s[++size])
		;
	return (size);
}
