/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappendnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:16:00 by mkejji            #+#    #+#             */
/*   Updated: 2016/03/23 18:28:22 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstappendnew(t_list **l, void *content, size_t size, size_t alloc)
{
	t_list	*list;

	list = ft_lstnew(content, alloc);
	if (list == NULL)
		return ;
	list->content_size = size;
	if (*l == NULL)
		*l = list;
	else
		ft_lstappend(l, list);
}
