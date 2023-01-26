/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_player_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:50:47 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:51:41 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	key_player_rotate(t_game *game)
{
	if (game->key.is_right)
	{
		while (game->player.rotate_speed > 0)
		{
			game->player.rotate_speed -= M_PI * 0.8;
			game->player.rotate = -game->player.rotate_speed \
			* game->frame.frame_time;
			player_rotate(game);
		}
		game->player.rotate_speed = 3.0;
	}
	if (game->key.is_left)
	{
		while (game->player.rotate_speed > 0)
		{
			game->player.rotate_speed -= M_PI * 0.8;
			game->player.rotate = game->player.rotate_speed \
			* game->frame.frame_time;
			player_rotate(game);
		}
		game->player.rotate_speed = 3.0;
	}
	return (0);
}
