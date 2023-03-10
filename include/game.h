/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:36 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:37 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "map.h"
# include "camera.h"
# include "frame.h"
# include "screen.h"
# include "ray.h"
# include "wlx.h"
# include "draw.h"
# include "player.h"
# include "key.h"

typedef struct s_game
{
	t_map		map;
	t_player	player;
	t_camera	camera;
	t_frame		frame;
	t_wlx		wlx;
	t_screen	screen;
	t_ray		ray;
	t_draw		draw;
	t_key		key;
	t_draw		texture[4];
	t_draw		*select_texture;
	t_data		tmp_data;
}				t_game;

#endif