/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 15:46:47 by mkejji            #+#    #+#             */
/*   Updated: 2016/07/13 15:46:48 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_buf	*ft_bufnew(size_t size)
{
	t_buf	*b;

	b = (t_buf*)malloc(sizeof(t_buf));
	if (b == NULL)
		return (NULL);
	b->buf = ft_strnew(size);
	if (b->buf == NULL)
	{
		free(b);
		return (NULL);
	}
	b->size = 0;
	b->cap = size;
	return (b);
}

t_buf	*ft_bufdup(char *str)
{
	t_buf	*b;

	b = (t_buf*)malloc(sizeof(t_buf));
	if (b == NULL)
		return (NULL);
	b->buf = ft_strdup(str);
	if (b->buf == NULL)
	{
		free(b);
		return (NULL);
	}
	b->size = ft_strlen(str);
	b->cap = b->size + 1;
	return (b);
}
