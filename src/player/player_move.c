/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:22:28 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:23:21 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	player_move_ad(t_game *game, int x, int y)
{
	double	temp_x;
	double	temp_y;

	temp_x = game->player.pos_x + (double)x \
	* game->player.dir_y * (game->player.move_speed * game->frame.frame_time);
	temp_y = game->player.pos_y + (double)y * game->player.dir_x * \
	(game->player.move_speed * game->frame.frame_time);
	if (player_position_is_wall(game, (int)(temp_x), (int)(temp_y)))
		return (-1);
	game->player.pos_x = temp_x;
	game->player.pos_y = temp_y;
	return (0);
}

int	player_move_ws(t_game *game, int x, int y)
{
	double	temp_x;
	double	temp_y;

	temp_x = game->player.pos_x + (double)x * game->player.dir_x \
	* (game->player.move_speed * game->frame.frame_time);
	temp_y = game->player.pos_y + (double)y * game->player.dir_y \
	* (game->player.move_speed * game->frame.frame_time);
	if (player_position_is_wall(game, (int)(temp_x), (int)(temp_y)))
		return (-1);
	game->player.pos_x = temp_x;
	game->player.pos_y = temp_y;
	return (0);
}
