/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:26:09 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 08:34:38 by mkejji           ###   ########.fr       */
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

void			trace_trait(int *p1, int *p2, t_mlx *p);
int				**parse_input(char *filename);

#endif
