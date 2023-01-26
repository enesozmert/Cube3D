/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_update.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:47:00 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:47:01 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_update(t_game *game)
{
	game->ray.per_pixel_x = -1;
	init_tmp_data(game);
	clock_gettime(CLOCK_MONOTONIC, &game->frame.old_time);
	while (++game->ray.per_pixel_x < game->screen.width)
	{
		ray(game);
		ray_steps(game);
		ray_hit(game);
		ray_fisheye_fixed(game);
		ray_wall_height(game);
		draw_pixel_height(game);
		draw_wall_x(game);
		draw_texture_select(game);
		draw_texture_calculate(game);
		draw_texture(game);
	}
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
