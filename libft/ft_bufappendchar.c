/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufappendchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 20:40:53 by mkejji            #+#    #+#             */
/*   Updated: 2016/07/17 21:00:16 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_bufappendchar(t_buf *buf, char appendix)
{
	char *new;

	if (buf == NULL)
		return (0);
	if (appendix == '\0')
		return (1);
	if (buf->cap - buf->size > 1)
	{
		buf->buf[buf->size] = appendix;
		buf->buf[buf->size + 1] = '\0';
		buf->size++;
		return (1);
	}
	new = ft_strnew(buf->cap + 1);
	ft_memcpy(new, buf->buf, buf->size);
	new[buf->size] = appendix;
	free(buf->buf);
	buf->buf = new;
	buf->size++;
	buf->cap++;
	return (1);
}
