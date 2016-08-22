/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:33:10 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/03 07:56:29 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*((unsigned char*)dst + i) = *((unsigned char*)src + i);
			i++;
		}
	}
	else
	{
		while (len-- > i)
			*((unsigned char*)dst + len) = *((unsigned char*)src + len);
	}
	return (dst);
}
