/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 06:36:31 by mkejji            #+#    #+#             */
/*   Updated: 2016/06/28 15:51:26 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		l1;
	int		l2;

	l1 = (s1 == NULL) ? 0 : ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = ft_strnew(l1 + l2 + 1);
	if (str == NULL)
		return (NULL);
	if (l1)
		ft_memcpy(str, s1, l1);
	ft_memcpy(str + l1, s2, l2);
	return (str);
}
