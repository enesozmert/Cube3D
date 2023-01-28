/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:47:00 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:49:50 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_loop(t_game *game)
{
	game->ray.per_pixel_x = -1;
	init_tmp_data(game);
	clock_gettime(CLOCK_MONOTONIC, &game->frame.old_time);
	while (++game->ray.per_pixel_x < game->screen.width)
		ray_update(game);
	mlx_put_image_to_window(game->wlx.mlx, \
			game->wlx.win, game->tmp_data.img, 0, 0);
	mlx_destroy_image(game->wlx.mlx, game->tmp_data.img);
	ray_time(game);
	key_close(game);
	key_player_jump(game);
	key_player_move(game);
	key_player_rotate(game);
	return (0);
}
