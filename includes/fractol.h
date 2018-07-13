#ifndef FRACTOL_H
# define FRACTOL_H

#include <stdbool.h>
#include <stdio.h>
#include "mlx.h"
#include "libft.h"

# define SCREEN_WIDTH 500
# define SCREEN_HEIGHT 500
# define WINDOW_TITLE "window title"

#define WHITE 0x00FFFFFF

typedef struct s_dna
{
	void	*mlx;
	void	*win;
	void	*img;
	void	*img_data;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}t_dna;

typedef struct s_vector
{
	int		x;
	int		y;
	int		z;
}	t_vector;

typedef struct s_rgb
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}	t_rgb;

void	debug_test(t_dna *dna);
void	pixel_put_img(char *data, t_vector pos, t_rgb color);
void	create_img(t_dna *dna);
int		controller(int keycode, void *param);

#endif
