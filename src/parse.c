/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:43 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 08:38:57 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	**parse_input(char *filename)
{
	t_buf	*filecontent;
	char	*line;
	int		**grid;
	int		fd;
	int		lines;

	fd = open(filename, O_RDONLY);
	lines = 0;
	while (get_next_line(fd, &line))
	{
		ft_stradd(&filecontent, line);

		lines++;
	}
	return (grid);
}
