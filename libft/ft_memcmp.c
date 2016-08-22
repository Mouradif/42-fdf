/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:43:23 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/04 06:40:10 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char*)s1 + i) != *((unsigned char*)s2 + i))
		{
			return ((int)(*((unsigned char*)s1 + i) -
						*((unsigned char*)s2 + i)));
		}
		i++;
	}
	return (0);
}
