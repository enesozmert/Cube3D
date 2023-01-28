/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:58:34 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:16:07 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

static int	player_find(t_map *map, char player)
{
	if (ft_strchr(map->possible_single_items, \
			player))
		return (1);
	return (0);
}

int	player_error(t_map *map)
{
	int	x;
	int	y;
	int	size[2];

	y = 0;
	size[0] = get_map_height(map->path) - 7;
	while (map->matris[y])
	{
		x = 0;
		size[1] = (int)ft_strlen(map->matris[y]) - 1;
		while (map->matris[y][x])
		{
			if (player_find(map, map->matris[0][x]) && y == 0)
				return (604);
			if (player_find(map, map->matris[y][0]) && x == 0)
				return (603);
			if (player_find(map, map->matris[y][size[1]]) && x == size[1])
				return (602);
			if (player_find(map, map->matris[size[0]][x]) && y == size[0])
				return (601);
			x++;
		}
		y++;
	}
	return (0);
}
