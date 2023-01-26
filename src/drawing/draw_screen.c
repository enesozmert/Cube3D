/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_screen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:40:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:40:21 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	draw_screen(t_game *game)
{
	int	screen_w;
	int	screen_h;

	screen_w = game->screen.width;
	screen_h = game->screen.height;
	game->wlx.mlx = mlx_init();
	game->wlx.win = mlx_new_window(game->wlx.mlx, screen_w, screen_h,
			"Ecole 42 eozmert iyapar");
	return (0);
}
