/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_texture_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:43:13 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:43:32 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

unsigned long	draw_texture_color(t_game *game)
{
	if (game->ray.side == 1)
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0) || \
		(game->ray.dir_x >= 0 && game->ray.dir_y <= 0))
			return (rgb_hex(255, 0, 0));
		else
			return (rgb_hex(255, 255, 0));
	}
	else
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0) || \
		(game->ray.dir_x <= 0 && game->ray.dir_y >= 0))
			return (rgb_hex(187, 227, 34));
		else
			return (rgb_hex(54, 0, 171));
	}
	return (0);
}
