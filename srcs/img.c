/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:35:53 by lchety            #+#    #+#             */
/*   Updated: 2018/07/13 02:02:01 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	create_img(t_dna *dna)
{
	dna->img = mlx_new_image (dna->mlx, SCREEN_WIDTH, SCREEN_HEIGHT);
	dna->img_data = mlx_get_data_addr(dna->img, &dna->bits_per_pixel, &dna->size_line, &dna->endian);
}

void	pixel_put_img(char *data, t_vector pos, t_rgb color)
{
	int addr;

	addr = (pos.x * 4) + (pos.y * (SCREEN_WIDTH * 4));
	data[addr] = color.r;
	data[addr + 1] = color.g;
	data[addr + 2] = color.b;
}
