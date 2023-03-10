/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_update.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:47:00 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 12:49:59 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_update(t_game *game)
{
	ray(game);
	ray_length(game);
	ray_steps(game);
	ray_hit(game);
	ray_fisheye_fixed(game);
	ray_wall_height(game);
	draw_pixel_height(game);
	draw_wall_x(game);
	draw_texture_select(game);
	draw_texture_calculate(game);
	draw_texture(game);
	return (0);
}
