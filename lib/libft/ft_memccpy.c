/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 08:45:40 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/05 21:54:13 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t i;

	if (n == 0)
		return ((void *)NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char*)d + i) = *((unsigned char*)s + i);
		if (*((unsigned char*)d + i) == (unsigned char)c)
			return ((void*)(d + i + 1));
		i++;
	}
	return ((void*)NULL);
}
