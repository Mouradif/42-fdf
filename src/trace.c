/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:49 by mkejji            #+#    #+#             */
/*   Updated: 2016/06/20 23:58:31 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"

void	trace_trait(int *p1, int *p2, t_mlx *p)
{
	double	d[2];
	double	pt[2];
	double	pas[2];

	d[0] = p2[0] - p1[0];
	d[1] = p2[1] - p1[1];
	pas[0] = (ft_abs(d[0]) > ft_abs(d[1])) ? 1 : (double)(d[0] / d[1]);
	pas[1] = (ft_abs(d[0]) < ft_abs(d[1])) ? 1 : (double)(d[1] / d[0]);
	pt[0] = p1[0];
	pt[1] = p1[1];
	while (pt[0] != p2[0] || pt[1] != p2[1])
	{
		mlx_pixel_put(p->mlx, p->win, pt[0], pt[1], 0x00FFFFFF);
		pt[0] += pas[0];
		pt[1] += pas[1];
	}
}
