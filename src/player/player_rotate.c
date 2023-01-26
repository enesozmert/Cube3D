/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:41:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:41:50 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	player_rotate(t_game *game)
{
	double	player_dir_x;
	double	camera_plane_x;
	double	rot_x;
	double	rot_y;

	player_dir_x = game->player.dir_x;
	camera_plane_x = game->camera.plane_x;
	rot_x = cos(-game->player.rotate);
	rot_y = sin(-game->player.rotate);
	game->player.dir_x = player_dir_x * rot_x - game->player.dir_y * rot_y;
	game->player.dir_y = player_dir_x * rot_y + game->player.dir_y * rot_x;
	game->camera.plane_x = camera_plane_x \
	* rot_x - game->camera.plane_y * rot_y;
	game->camera.plane_y = camera_plane_x \
	* rot_y + game->camera.plane_y * rot_x;
	return (0);
}
