#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>

void	trace_trait(int *p1, int *p2, t_mlx *p)
{
	double	diff[2];
	double 	pt[2];
	double	pas[2];

	diff[0] = p2[0] - p1[0];
	diff[1] = p2[1] - p1[1];
	pas[0] = (ft_abs(diff[0]) > ft_abs(diff[1])) ? 1 : (double)(diff[0] / diff[1]);
	pas[1] = (ft_abs(diff[0]) < ft_abs(diff[1])) ? 1 : (double)(diff[1] / diff[0]);
	printf("Trait entre le point [%d, %d] et [%d, %d].\nDiffX = %f; DiffY = %f\nPas = %f // %f\n", p1[0], p1[1], p2[0], p2[1], diff[0], diff[1], pas[0], pas[1]);
	pt[0] = p1[0];
	pt[1] = p1[1];
	while (pt[0] != p2[0] || pt[1] != p2[1])
	{
		mlx_pixel_put(p->mlx, p->win, pt[0], pt[1], 0x00FFFFFF);
		printf("Pixel put [%f, %f]\n", pt[0], pt[1]);
		pt[0] += pas[0];
		pt[1] += pas[1];
	}
}
