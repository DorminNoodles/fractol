/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:53:00 by lchety            #+#    #+#             */
/*   Updated: 2018/07/14 13:02:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		controller(int keycode, void *param)
{
	if (keycode == 53)
	{
		exit(EXIT_SUCCESS);
	}


	printf("%d  bip\n", keycode);

	return(0);
}
