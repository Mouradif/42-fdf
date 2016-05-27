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
	int		**grid;
	int		lines;

	filecontent = getfile(filename);
	printf("%s", filecontent);
	return (grid);
}
