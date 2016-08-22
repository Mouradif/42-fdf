/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:34:00 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/02 17:24:00 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_strdigits(const char *str)
{
	int i;

	i = ((str[0] == '-') || (str[0] == '+')) ? 1 : 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

static char		*ft_trimleft(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	str = ft_strdup(s + i);
	return (str);
}

int				ft_atoi(const char *s)
{
	int		sign;
	size_t	digits;
	size_t	i;
	int		n;
	char	*str;

	str = ft_trimleft(s);
	sign = (str[0] == '-') ? -1 : 1;
	digits = ft_strdigits(str);
	if (ft_strncmp(s, "-2147483648", 11) == 0)
		return (-2147483648);
	i = ((str[0] == '-') || (str[0] == '+')) ? 1 : 0;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n += (str[i] - 48) * ft_pow(10, digits - i - 1);
		i++;
	}
	return (n * sign);
}
