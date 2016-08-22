/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:52:11 by mkejji            #+#    #+#             */
/*   Updated: 2015/11/25 16:04:51 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdump(void *ptr, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (*((char*)ptr + i) == '\0')
			ft_putstr("\\0");
		else
			ft_putchar(*((char*)ptr + i));
		i++;
	}
}
