#ifndef FDF_H
# include <stdlib.h>
# define FDF_H

typedef struct	s_mlx
{
	void		*mlx;
	void		*win;
	size_t		width;
	size_t		height;
	int			**grid;
}				t_mlx;

void	trace_trait(int *p1, int *p2, t_mlx *p);
int		**parse_input(char *filename);

#endif
