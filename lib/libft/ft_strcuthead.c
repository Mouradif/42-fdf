/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcuthead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 04:10:08 by mkejji            #+#    #+#             */
/*   Updated: 2016/06/29 16:24:02 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strcuthead(char **s, int start)
{
	char	*cut;

	cut = ft_strdup(*s + start);
	if (cut == NULL)
		return ;
	free(*s);
	*s = cut;
}
