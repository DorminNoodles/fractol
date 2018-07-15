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



typedef struct s_vector
{
	int		x;
	int		y;
	int		z;
}	t_vector;

typedef struct s_mouse
{
	int		x;
	int		y;
}	t_mouse;

typedef union u_rgba
{
   struct
   {
       unsigned char r;
       unsigned char g;
       unsigned char b;
       unsigned char a;
   };
   int color;
}	t_rgba;

typedef struct s_dna
{
	void		*mlx;
	void		*win;
	void		*img;
	void		*img_data;
	int			bits_per_pixel;
	int			size_line;
	int			endian;
	t_mouse		mouse;
}t_dna;

void	debug_test(t_dna *dna);
void	pixel_put_img(int *img, t_vector v, t_rgba color);
void	create_img(t_dna *dna);
int		controller(int keycode, void *param);

#endif
