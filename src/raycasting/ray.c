/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:48:00 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:48:25 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray(t_game *game)
{
	game->camera.x = (double)(2 * game->ray.per_pixel_x) / \
	(double)game->screen.width - 1;
	game->ray.dir_x = game->player.dir_x + \
	(game->camera.plane_x * game->camera.x);
	game->ray.dir_y = game->player.dir_y + \
	(game->camera.plane_y * game->camera.x);
	game->ray.map_x = floorf(game->player.pos_x);
	game->ray.map_y = floorf(game->player.pos_y);
	game->ray.delta_dist_x = (game->ray.dir_x == 0) ? 1e30 : fabs(1 / game->ray.dir_x);
	game->ray.delta_dist_y = (game->ray.dir_y == 0) ? 1e30 : fabs(1 / game->ray.dir_y);
	return (0);
}
