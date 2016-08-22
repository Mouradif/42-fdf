/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:43 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 11:08:44 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <limits.h>

int		*parse_line(char *line)
{
	int		i;
	char	**tmp;
	int		*tab;

	i = 0;
	tmp = ft_strsplit(line, ' ');
	while (tmp[i])
		i++;
	tab = (int*)malloc((i + 1) * sizeof(int));
	i = 0;
	while (tmp[i])
	{
		tab[i] = ft_atoi(tmp[i]);
		i++;
	}
	tab[i] = INT_MIN;
	return (tab);
}

void	print_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j] != INT_MIN)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		**parse_input(char *filename)
{
	t_buf	*filecontent;
	char	**lines;
	int		**grid;
	int		i;

	lines = 0;
	filecontent = ft_buf_file(filename);
	i = 0;
	lines = ft_strsplit(filecontent->buf, '\n');
	while (lines[i])
		i++;
	grid = (int**)malloc((i + 1) * sizeof(int*));
	i = 0;
	while (lines[i])
	{
		grid[i] = parse_line(lines[i]);
		i++;
	}
	grid[i] = NULL;
	print_grid(grid);
	return (grid);
}

t_win	*init_window(int **grid)
{
	t_win	*fdf;
	int		i;

	fdf = (t_win*)malloc(sizeof(t_win));
	fdf->mlx = mlx_init();
	fdf->win = mlx_new_window(fdf->mlx, 600, 600, "Fil De Fer");
	fdf->grid = grid;
	while (grid[i])
		i++;
	fdf->height = i;
	i = 0;
	while (grid[0][i])
		i++;
	fdf->width = i;
	return (fdf);
}
