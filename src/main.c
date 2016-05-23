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


int 	main(int argc, char **argv)
{
	t_mlx	fdf;
	int		pt1[2] = { 245, 137};
	int		pt2[2] = { 245, 455};

	if (argc == 2)
	{
		fdf.mlx = mlx_init();
		fdf.win = mlx_new_window(fdf.mlx, 600, 600, "Fil De Fer");
		//fdf.grid = parse_input(argv[1]);
		mlx_key_hook(fdf.win, key_fct, &fdf);
		trace_trait(pt1, pt2, &fdf);
		mlx_loop(fdf.mlx);
	}
	else
		puts("usage : ./fdf [map]");
	return (0);
}
