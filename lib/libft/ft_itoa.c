/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:31:17 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/20 21:09:18 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(int n)
{
	if (n < 0)
		return (1 + count_digits(-n));
	else
	{
		if (n >= 10)
			return (1 + count_digits(n / 10));
		else
			return (1);
	}
}

char				*ft_itoa(int n)
{
	char			*a;
	unsigned int	digits;
	unsigned int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	digits = count_digits(n);
	a = ft_strnew(digits);
	if (a == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		a[0] = '-';
	}
	while (n >= 10)
	{
		digits--;
		a[digits] = (n % 10) + '0';
		n = n / 10;
	}
	digits--;
	a[digits] = (n % 10) + '0';
	return (a);
}
