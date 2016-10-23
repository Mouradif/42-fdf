/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:49 by mkejji            #+#    #+#             */
/*   Updated: 2016/10/08 22:00:38 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <limits.h>
#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#define MAX(x,y) ((x > y) ? x : y)
#define ABS(x) ((x < 0) ? -x : x)
#include <stdio.h>

void	trace_trait(t_point p1, t_point p2, t_win *p)
{
	t_point	d;
	double	pas[2];
	int		m;
	int		i;

	i = -1;
	d = ft_point(p2.x - p1.x, p2.y - p1.y);
	m = MAX(ABS(d.x), ABS(d.y));
	pas[0] = (ABS(d.x) > ABS(d.y)) ? 1 : ABS(d.x / d.y);
	pas[1] = (ABS(d.x) < ABS(d.y)) ? 1 : ABS(d.y / d.x);
	while (++i < m)
	{
		mlx_pixel_put(p->mlx, p->win, (int)round(p1.x), (int)round(p1.y), COLOR_WHITE);
		p1.x += (p2.x > p1.x) ? pas[0] : -pas[0];
		p1.y += (p2.y > p1.y) ? pas[1] : -pas[1];
	}
}

void	trace_grid(t_win *p)
{
	size_t	i;
	size_t	j;
	t_point	p1;
	t_point	p2;

	j = 0;
	while (j < p->height)
	{
		i = 0;
		while (i < p->width)
		{
			p2 = ft_point(0, 0);
			p1 = ft_point(START_X + (i * 15) + (j * 7), START_Y + (i * 7) - (j * 7) - (p->grid[j][i] * 5));
			if (p->grid[j][i + 1] != INT_MIN)
			{
				p2 = ft_point(START_X + ((i + 1) * 15) + (j * 7), START_Y + ((i + 1) * 7) - (j * 7) - (p->grid[j][i + 1] * 5));
				trace_trait(p1, p2, p);
			}
			if (p->grid[j + 1] != NULL)
			{
				p2 = ft_point(START_X + (i * 15) + ((j + 1) * 7), START_Y + (i * 7) - ((j + 1) * 7) - (p->grid[j + 1][i] * 5));
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
