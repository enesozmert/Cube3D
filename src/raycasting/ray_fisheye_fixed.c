/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_fisheye_fixed.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:44:34 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:45:04 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_fisheye_fixed(t_game *game)
{
	if (game->ray.side == 0)
		game->ray.perp_wall_dist \
		= (game->ray.side_dist_x - game->ray.delta_dist_x);
	else
		game->ray.perp_wall_dist \
		= (game->ray.side_dist_y - game->ray.delta_dist_y);
	return (0);
}
