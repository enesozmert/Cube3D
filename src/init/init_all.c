/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:07:21 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:07:34 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_all(t_game *game)
{
	init_map(&game->map);
	init_player(&game->player);
	init_camera(&game->camera);
	init_frame(&game->frame);
	init_screen(&game->screen);
	init_ray(&game->ray);
	init_draw(&game->draw);
	init_key(&game->key);
}
