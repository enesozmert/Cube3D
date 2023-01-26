/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_lenght.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:37:07 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 12:46:02 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_length(t_game *game)
{
	if (game->ray.dir_y == 0)
		game->ray.delta_dist_x = 1e30;
	else
	{
		if (game->ray.dir_x == 0)
			game->ray.delta_dist_x = 1;
		else
			game->ray.delta_dist_x = fabs(1 / game->ray.dir_x);
	}
	if (game->ray.dir_x == 0)
		game->ray.delta_dist_y = 1e30;
	else
	{
		if (game->ray.dir_y == 0)
			game->ray.delta_dist_y = 1;
		else
			game->ray.delta_dist_y = fabs(1 / game->ray.dir_y);
	}
	return (0);
}
