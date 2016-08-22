/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 15:46:44 by mkejji            #+#    #+#             */
/*   Updated: 2016/07/13 15:46:46 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_buf	*ft_bufcopy(t_buf *src)
{
	char	*str;
	t_buf	*buf;

	str = (char*)malloc(src->cap);
	ft_memcpy(str, src->buf, src->size + 1);
	buf = (t_buf*)malloc(sizeof(t_buf));
	buf->size = src->size;
	buf->cap = src->cap;
	buf->buf = str;
	return (buf);
}
