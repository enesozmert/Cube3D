/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_mouse_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:13:51 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:02:25 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	event_mouse_move(int x, int y, t_game *game)
{
	(void)y;
	if (game->key.cursor % 2)
		mlx_mouse_hide();
	else
		mlx_mouse_show();
	if (x < game->screen.width / 2)
	{
		game->player.rotate = -game->player.rotate_speed \
		* game->frame.frame_time;
		player_rotate(game);
	}
	else if (x > game->screen.width / 2)
	{
		game->player.rotate = game->player.rotate_speed \
		* game->frame.frame_time;
		player_rotate(game);
	}
	mlx_mouse_move(game->wlx.win, game->screen.width / 2,
		game->screen.height / 2);
	return (0);
}
