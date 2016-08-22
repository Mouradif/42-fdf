/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:20:20 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/04 01:07:31 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s2[j] && s2[j] == s1[i + j] && i + j < n)
			j++;
		if (s2[j] == '\0')
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
