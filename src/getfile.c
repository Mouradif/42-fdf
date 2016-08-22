/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:40:59 by mkejji            #+#    #+#             */
/*   Updated: 2015/12/14 01:43:51 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

char	*getfd(int fd)
{
	char	*line;
	char	*file;

	file = NULL;
	line = NULL;
	while ((get_next_line(fd, &line)) > 0)
	{
		ft_stradd(&file, line);
		ft_stradd(&file, "\n");
	}
	return (file);
}

char	*getfile(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	return (getfd(fd));
}
