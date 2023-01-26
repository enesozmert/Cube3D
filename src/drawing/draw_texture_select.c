/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_texture_select.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:44:17 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:44:17 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	draw_texture_select(t_game *game)
{
	if (game->ray.side == 1)
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0)
			|| (game->ray.dir_x >= 0 && game->ray.dir_y <= 0))
			game->select_texture = &game->texture[0];
		else
			game->select_texture = &game->texture[1];
	}
	else
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0)
			|| (game->ray.dir_x <= 0 && game->ray.dir_y >= 0))
			game->select_texture = &game->texture[2];
		else
			game->select_texture = &game->texture[3];
	}
}
