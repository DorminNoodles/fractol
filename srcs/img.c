/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:35:53 by lchety            #+#    #+#             */
/*   Updated: 2018/07/15 01:42:17 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	create_img(t_dna *dna)
{
	dna->img = mlx_new_image (dna->mlx, SCREEN_WIDTH, SCREEN_HEIGHT);
	dna->img_data = mlx_get_data_addr(dna->img, &dna->bits_per_pixel, &dna->size_line, &dna->endian);
}

void	pixel_put_img(int *img, t_vector v, t_rgba color)
{
	img[v.x + (v.y * SCREEN_WIDTH)] = color.color;
}
