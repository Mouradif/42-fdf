/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:26:09 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 11:45:09 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <stdlib.h>

typedef struct	s_win
{
	void		*mlx;
	void		*win;
	size_t		width;
	size_t		height;
	int			**grid;
}				t_win;

typedef struct	s_point
{
	double	x;
	double	y;
}				t_point;

void			trace_trait(t_point p1, t_point p2, t_win *p);
int				**parse_input(char *filename);
char			*getfile(char *filename);
t_win			*init_window(int **grid);
t_point			ft_point(int x, int y);

#endif
