/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 07:43:25 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/03 07:43:37 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelfirst(t_list **lst)
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	tmp = (*lst)->next;
	free((*lst)->content);
	free(*lst);
	*lst = tmp;
}
