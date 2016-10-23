/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:25 by mkejji            #+#    #+#             */
/*   Updated: 2016/10/08 22:01:11 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>

int		key_fct(int keycode)
{
	if (keycode == 53)
		exit(0);
	printf("key : %d\n", keycode);
	return (0);
}

int		main(int argc, char **argv)
{
	t_win	*fdf;
	int		**tab;
	t_point	tl;
	t_point tr;
	t_point	bl;
	t_point	br;

	tl = ft_point(100, 100);
	tr = ft_point(500, 100);
	bl = ft_point(500, 100);
	br = ft_point(500, 500);
	if (argc == 2)
	{
		tab = parse_input(argv[1]);
		fdf = init_window(tab);
		printf("width: %zu, height: %zu\n", fdf->width, fdf->height);
		print_grid(tab);
		mlx_key_hook(fdf->win, key_fct, fdf);
		//trace_trait(br, tl, fdf);
		trace_grid(fdf);
		mlx_loop(fdf->mlx);
	}
	else
		puts("usage : ./fdf [map]");
	return (0);
}
