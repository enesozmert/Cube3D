/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tmp_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:13:29 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:14:07 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_tmp_data(t_game *game)
{
	game->tmp_data.bits_per_pixel = 0;
	game->tmp_data.line_length = 0;
	game->tmp_data.endian = 0;
	game->tmp_data.img = \
	mlx_new_image(game->wlx.mlx, game->screen.width, game->screen.height);
	game->tmp_data.addr = \
	(int *)mlx_get_data_addr(game->tmp_data.img, &game->tmp_data.bits_per_pixel,
			&game->tmp_data.line_length, &game->tmp_data.endian);
}
