/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:27:17 by lchety            #+#    #+#             */
/*   Updated: 2017/12/12 21:44:02 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_pixel_img(t_dna *dna)
{
	t_vector a;
	t_rgb rgb;

	a.x = 50;
	a.y = 50;

	rgb.r = 255;
	rgb.g = 0;
	rgb.b = 255;


	pixel_put_img(dna->img_data, a, rgb);

	a.x = 75;
	a.y = 75;
	pixel_put_img(dna->img_data, a, rgb);
}

void	print_fractale(t_dna *dna)
{
	int		iteration_max = 50;
	int		pos;
	int		x = 0;
	int		y = 0;
	t_vector	point;
	t_rgb	rgb;

	int	tmp;

	rgb.r = 255;
	rgb.g = 255;
	rgb.b = 255;


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
			pixel_put_img(dna->img_data, point, rgb);
		}

		pos++;
	}

}




void	debug_test(t_dna *dna)
{
	print_pixel_img(dna);
	print_fractale(dna);

}
