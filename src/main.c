/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 17:25:25 by mkejji            #+#    #+#             */
/*   Updated: 2016/05/23 17:31:22 by mkejji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "libft.h"
#include <stdio.h>

int		key_fct(int keycode, t_mlx *p)
{
	if (keycode == 53)
		exit(0);
	printf("key : %d\n", keycode);
	return (0);
}

int		main(int argc, char **argv)
{
	t_mlx	fdf;

	if (argc == 2)
	{
		fdf.mlx = mlx_init();
		fdf.win = mlx_new_window(fdf.mlx, 600, 600, "Fil De Fer");
		mlx_key_hook(fdf.win, key_fct, &fdf);
		mlx_loop(fdf.mlx);
	}
	else
		puts("usage : ./fdf [map]");
	return (0);
}
