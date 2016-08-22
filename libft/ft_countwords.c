/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 05:45:01 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/04 05:47:02 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_countwords(char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	count;

	i = 0;
	len = 0;
	count = 0;
	while (s[i])
	{
		count = (s[i] == c && len > 0) ? count + 1 : count;
		len = (s[i] == c) ? 0 : len + 1;
		i++;
	}
	return ((len) ? count + 1 : count);
}
