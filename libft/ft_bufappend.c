/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 04:14:16 by mkejji            #+#    #+#             */
/*   Updated: 2016/07/17 20:41:58 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bufappend(t_buf *buf, char *appendix)
{
	size_t	blen;
	size_t	alen;
	char	*new;

	if (buf == NULL || appendix == NULL)
		return (0);
	if (*appendix == '\0')
		return (1);
	new = NULL;
	blen = ft_strlen(buf->buf);
	alen = ft_strlen(appendix);
	if (alen < buf->cap - buf->size)
	{
		buf->buf = ft_strcat(buf->buf, appendix);
		buf->size += alen;
		return (1);
	}
	ft_stradd(&(buf->buf), appendix);
	buf->size = blen + alen;
	buf->cap = buf->size + 1;
	return (1);
}
