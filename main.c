




#include "mlx.h"
#include "libft.h"
#include "fractol.h"

int		controller(int keycode, void *param)
{
	if (keycode == 53)
	{
		exit(EXIT_SUCCESS);
	}

	return(0);
}

int		main(int argc, char **argv)
{
	t_dna	dna;
	void	*mlx;
	void	*win;


	mlx = mlx_init();
	win = mlx_new_window(mlx, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);

	mlx_hook(win, 2, 3, &controller, &dna);
	mlx_loop(mlx);

}
