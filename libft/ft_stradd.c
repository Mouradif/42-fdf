/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 04:09:28 by mkejji            #+#    #+#             */
/*   Updated: 2016/06/29 16:23:52 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_stradd(char **s1, char *s2)
{
	char	*join;

	if (*s2 == '\0')
		return ;
	join = ft_strjoin(*s1, s2);
	if (join == NULL)
		return ;
	if (*s1 != NULL)
		free(*s1);
	*s1 = join;
}
