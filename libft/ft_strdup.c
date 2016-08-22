/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:50:05 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/03 23:26:41 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	str = (char*)malloc((i + 1) * sizeof(char));
	if (str != NULL)
		ft_memcpy(str, s, i + 1);
	return (str);
}
