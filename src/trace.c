/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:49 by mkejji            #+#    #+#             */
/*   Updated: 2016/08/22 11:22:08 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <limits.h>
#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>

int		test(t_point p1, t_point p2, t_point pt)
{
	if (p2.x > p1.x && p2.y > p1.y)
		return (pt.x < p2.x && pt.y < p2.y);
	if (p2.x > p1.x && p2.y < p1.y)
		return (pt.x < p2.x && pt.y > p2.y);
	if (p2.x < p1.x && p2.y > p1.y)
		return (pt.x > p2.x && pt.y < p2.y);
	return (pt.x > p2.x && pt.y > p2.y);
}

void	next(t_point *p1, t_point d, double pas[2])
{
	if (d.x < 0)
		p1->x += (pas[0] < 0) ? pas[0] : -pas[0];
	else
		p1->x += (pas[0] < 0) ? -pas[0] : pas[0];
	if (d.y < 0)
		p1->y += (pas[1] < 0) ? pas[1] : -pas[1];
	else
		p1->y += (pas[1] < 0) ? -pas[1] : pas[1];
}

void	trace_trait(t_point p1, t_point p2, t_win *p)
{
	t_point	d;
	double	pas[2];

	d = ft_point(p2.x - p1.x, p2.y - p1.y);
	pas[0] = (ft_abs(d.x) > ft_abs(d.y)) ? 1 : d.x / d.y;
	pas[1] = (ft_abs(d.x) < ft_abs(d.y)) ? 1 : d.y / d.x;
	while (test(p1, p2, d))
	{
		printf("[%lf - %lf]\n", p1.x, p1.y);
		mlx_pixel_put(p->mlx, p->win, (int)round(p1.x), (int)round(p1.y), COLOR_WHITE);
		next(&p1, d, pas);
	}
}

void	trace_grid(t_win *p)
{
	size_t	i;
	size_t	j;
	t_point	p1;
	t_point	p2;

	p2 = ft_point(0, 0);
	j = 0;
	while (j < p->height)
	{
		i = 0;
		while (i < p->width)
		{
			p1 = ft_point(START_X + (i * 15) + (j * 7), START_Y + (i * 7) - (j * 7) + (p->grid[j][i] * 3));
			if (p->grid[j][i + 1] != INT_MIN)
			{
				p2 = ft_point(START_X + ((i + 1) * 15) + (j * 7), START_Y + ((i + 1) * 7) - (j * 7) + (p->grid[j][i + 1] * 3));
				trace_trait(p1, p2, p);
			}
			if (p->grid[j + 1] != NULL)
			{
				p2 = ft_point(START_X + (i * 15) + ((j + 1) * 7), START_Y + (i * 7) - ((j + 1) * 7) + (p->grid[j + 1][i] * 3));
				trace_trait(p1, p2, p);
			}
			if (p2.x == 0 && p2.y == 0)
				printf("not tracing any line from %lf/%lf\n", p1.x, p1.y);
			else
				printf("tracing a line from %lf/%lf to %lf/%lf\n", p1.x, p1.y, p2.x, p2.y);
			p2 = ft_point(0, 0);
			i++;
		}
		j++;
	}
}
