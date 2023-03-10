/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:44:39 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:46:32 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	draw_texture(t_game *game)
{
	int			y;
	long int	color;

	y = -1;
	while (++y < game->screen.height)
	{
		if (y < game->draw.start + game->player.jump_size)
			game->tmp_data.addr[y * game->screen.width + \
			game->ray.per_pixel_x] = (int)game->map.ceiling->hex_color;
		else if (y >= game->draw.start + game->player.jump_size && y
			<= game->draw.end + game->player.jump_size)
		{
			game->draw.tex_y = (int)game->draw.tex_pos & \
			(game->select_texture->tex_h - 1);
			game->draw.tex_pos += game->draw.step;
			color = game->select_texture->data.addr[game->select_texture->tex_h \
			* game->draw.tex_y + game->draw.tex_x];
			game->tmp_data.addr[y * game->screen.width \
			+ game->ray.per_pixel_x] = color;
		}
		else if (y < game->screen.height)
			game->tmp_data.addr[y * game->screen.width \
			+ game->ray.per_pixel_x] = (int)game->map.floor->hex_color;
	}
	return (0);
}
