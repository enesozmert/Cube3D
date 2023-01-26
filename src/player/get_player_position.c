/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_player_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:21:44 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:22:09 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	get_player_position(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (game->map.matris[++y])
	{
		x = -1;
		while (game->map.matris[y][++x])
		{
			if (ft_strchr(game->map.possible_single_items,
					game->map.matris[y][x]))
			{
				game->player.pos_x = (double)x + 0.5;
				game->player.pos_y = (double)y + 0.5;
				return (1);
			}
		}
	}
	return (0);
}
