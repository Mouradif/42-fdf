/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 06:26:47 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/20 19:16:05 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **l, t_list *elem)
{
	t_list	*tmp;

	tmp = *l;
	if (tmp == NULL)
		*l = elem;
	else
	{
		tmp = *l;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = elem;
	}
}
