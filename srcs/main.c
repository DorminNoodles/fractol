/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:32:32 by lchety            #+#    #+#             */
/*   Updated: 2018/07/15 01:55:36 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mouse(const int x, const int y, void *param)
{
	((t_dna*)param)->mouse.x = x;
	printf("x: %d  \n", ((t_dna*)param)->mouse.x);
	return (0);
}

int	looop(const int x, const int y, void *param)
{
	printf("x: %d   y: %d\n", x, y);
	return (0);
}

int		main(int argc, char **argv)
{
	t_dna	dna;

	dna.mlx = mlx_init();
	dna.win = mlx_new_window(dna.mlx, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);

	create_img(&dna);
	debug_test(&dna);

	mlx_put_image_to_window(dna.mlx, dna.win, dna.img, 0, 0);

	mlx_hook(dna.win, 2, 3, controller, &dna);
	mlx_hook(dna.win, 6, 1 << 8, mouse, &dna);
	// mlx_mouse_hook(dna.win, mouse, &dna);
	mlx_hook(dna.win, 2, 3, controller, &dna);
	mlx_loop(dna.mlx);
	return (0);
}
