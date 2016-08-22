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

#include "mlx.h"
#include "fdf.h"
#include "libft.h"

void	trace_trait(t_point p1, t_point p2, t_win *p)
{
	double	d[2];
	double	pt[2];
	double	pas[2];

	d[0] = p2.x - p1.x;
	d[1] = p2.y - p1.y;
	pas[0] = (ft_abs(d[0]) > ft_abs(d[1])) ? 1 : (double)(d[0] / d[1]);
	pas[1] = (ft_abs(d[0]) < ft_abs(d[1])) ? 1 : (double)(d[1] / d[0]);
	pt[0] = p1.x;
	pt[1] = p1.y;
	while (pt[0] != p2.x || pt[1] != p2.y)
	{
		mlx_pixel_put(p->mlx, p->win, pt[0], pt[1], 0x00FFFFFF);
		pt[0] += pas[0];
		pt[1] += pas[1];
	}
}
