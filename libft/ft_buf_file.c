/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:40:59 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 09:05:31 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

t_buf	*ft_buf_fd(int fd)
{
	char	*line;
	t_buf	*file;

	file = ft_bufnew(BUFF_SIZE);
	line = NULL;
	while ((ft_get_next_line(fd, &line)) > 0)
	{
		ft_bufappend(file, line);
		ft_bufappendchar(file, '\n');
	}
	return (file);
}

t_buf	*ft_buf_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	return (ft_buf_fd(fd));
}
