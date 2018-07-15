/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:27:17 by lchety            #+#    #+#             */
/*   Updated: 2018/07/15 01:54:08 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractale(t_dna *dna)
{
	int		iteration_max = 50;
	int		pos;
	int		x = 0;
	int		y = 0;
	t_vector	point;
	// t_rgb	rgb;

	int	tmp;

	// rgb.r = 255;
	// rgb.g = 255;
	// rgb.b = 255;


	pos = 0;

	while (pos < SCREEN_WIDTH * SCREEN_HEIGHT)
	{
		x = pos % SCREEN_WIDTH;
		y = pos / SCREEN_WIDTH;

		// if(!x)
		// 	printf ("\n");
		// else
		// 	printf("%d ", x);

		float	c_r = x;
		float	c_i = y;
		float	z_r = 0;
		float	z_i = 0;
		float	i = 0;

		printf("%f ", z_r * z_r + z_i * z_i);
		while (z_r * z_r + z_i * z_i < 4 && i < iteration_max)
		{
			tmp = z_r;
			z_r = z_r * z_r - z_i * z_i + c_r;
			z_i = 2*z_i*tmp + c_i;
			i++;
		}

		// printf("%f\n", i);
		if (i == iteration_max)
		{
			point.x = x;
			point.y = y;
			// pixel_put_img(dna->img_data, point, rgb);
		}

		pos++;
	}

}

void draw_square(void *img)
{
	t_vector v;
	int i;

	i = 0;


	printf("debug\n");
	// (int)rgb = WHITE;
	// *((int *)&rgb) = WHITE;

	// bite = (void*)123;
	// ft_memcpy((void*)&rgb, 0xFFFFFF00, 6);
	// printf("debug   %d\n", *bite);
	v.x = 0;
	v.y = 0;

	while (i < 500)
	{
		v.x = i / 50;
		v.y = i % 50;
		pixel_put_img(img, v, (t_rgba)WHITE);
		i++;
	}

}



void	debug_test(t_dna *dna)
{
	t_vector v;

	v.x = 10;
	v.y = 10;
	// print_pixel_img(dna);
	// print_fractale(dna);
	draw_square(dna->img_data);
	pixel_put_img(dna->img_data, v, (t_rgba)WHITE);
	v.x = 20;
	v.y = 20;
	pixel_put_img(dna->img_data, v, (t_rgba)WHITE);

}
