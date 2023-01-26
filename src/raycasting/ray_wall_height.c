/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_wall_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:47:15 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:47:42 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	ray_wall_height(t_game *game)
{
	game->draw.line_height = (int)((double)game->screen.height / \
	game->ray.perp_wall_dist);
	return (0);
}
