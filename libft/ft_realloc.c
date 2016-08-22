/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:55:04 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/03 07:44:54 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_realloc(void *init, size_t cur, size_t add)
{
	void	*new;

	new = ft_memalloc(cur + add);
	ft_memcpy(new, init, cur);
	free(init);
	return (new);
}
