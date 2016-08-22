/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:46:42 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/03 07:48:55 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
	ft_memcpy((void*)dst, (const void*)src, ft_min(i + 1, n));
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
