/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:07:51 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/10 08:02:56 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > size)
		return (size + srclen);
	i = 0;
	while (dstlen + i + 1 < size && src[i] != '\0')
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (i < ft_strlen(src))
		return (size);
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
