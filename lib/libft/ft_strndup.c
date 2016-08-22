/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:57:28 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/04 08:16:47 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *str;

	str = ft_strnew(n + 1);
	if (str == NULL)
		return (NULL);
	ft_memmove(str, s, n + 1);
	str[n] = '\0';
	return (str);
}
