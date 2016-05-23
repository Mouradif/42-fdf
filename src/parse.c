/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:43 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/23 17:30:04 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	**parse_input(char *filename)
{
	char	*filecontent;
	char	*line;
	int		**grid;
	int		fd;
	int		lines;

	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_stradd(&filecontent, line);
	}
	return (grid);
}
