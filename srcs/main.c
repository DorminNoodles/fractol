/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:32:32 by lchety            #+#    #+#             */
/*   Updated: 2018/07/13 02:22:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_dna	dna;
	bool toto;

	toto = true;


	dna.mlx = mlx_init();
	dna.win = mlx_new_window(dna.mlx, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);

	create_img(&dna);

	debug_test(&dna);

	mlx_put_image_to_window ( dna.mlx, dna.win, dna.img, 0, 0 );

	mlx_hook(dna.win, 2, 3, &controller, &dna);
	mlx_loop(dna.mlx);

}
