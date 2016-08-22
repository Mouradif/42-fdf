/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 06:27:11 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/10 12:50:56 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t))
{
	if (*lst != NULL)
	{
		del((*lst)->content, (*lst)->content_size);
		ft_memdel((void*)lst);
	}
}
