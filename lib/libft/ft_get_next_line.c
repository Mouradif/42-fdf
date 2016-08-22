/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 08:10:39 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/07 22:07:21 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h
#include <unistd.h>
#ifndef BUFF_SIZE
# define BUFF_SIZE 1024
#endif

static int	extract_next_line(char **rest, char **line, int offset)
{
	int		len;
	char	c;

	c = (offset) ? '\n' : '\3';
	len = ft_strchr(*rest, c) - *rest;
	*line = ft_strnew(len);
	ft_memcpy(*line, *rest, len);
	ft_strcuthead(rest, len + offset);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*rest = NULL;
	char		buf[BUFF_SIZE + 2];
	int			len;

	if (line == NULL || fd < 0)
		return (-1);
	ft_bzero(buf, sizeof(buf));
	if (rest && *rest == '\3')
	{
		ft_strdel(&rest);
		return (0);
	}
	if (rest && ft_strchr(rest, '\n'))
		return (extract_next_line(&rest, line, 1));
	if (rest && ft_strchr(rest, '\3'))
		return (extract_next_line(&rest, line, 0));
	len = read(fd, buf, BUFF_SIZE);
	if (len == -1)
		return (-1);
	buf[len] = (len == 0) ? '\3' : '\0';
	ft_stradd(&rest, buf);
	return (get_next_line(fd, line));
}
