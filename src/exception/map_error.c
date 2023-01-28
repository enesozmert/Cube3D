/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:55:28 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:26:29 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	map_error(t_map *map)
{
	int	x;
	int	y;
	int	size[2];

	y = -1;
	size[0] = get_map_height(map->path) - 7;
	while (map->matris[++y])
	{
		x = -1;
		size[1] = (int)ft_strlen(map->matris[y]) - 1;
		while (map->matris[y][++x])
		{
			if (map->matris[0][x] != '1' && map->matris[0][x] != ' ' && y == 0)
				return (404);
			if (map->matris[y][0] != '1' && map->matris[y][0] != ' ' && x == 0)
				return (403);
			if (map->matris[y][size[1]] != '1' \
			&& map->matris[y][size[1]] != ' ' && x == size[1])
				return (402);
			if (map->matris[size[0]][x] != '1' \
			&& map->matris[size[0]][x] != ' ' && y == size[0])
				return (401);
		}
	}
	return (0);
}

int	map_error_space(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->matris[y])
	{
		x = 0;
		while (map->matris[y][x])
		{
			if (map->matris[y][x] == '0')
			{
				if (map->matris[y + 1][x] == ' ')
					return (504);
				if (map->matris[y][x + 1] == ' ' )
					return (503);
				if (map->matris[y][x - 1] == ' ')
					return (502);
				if (map->matris[y - 1][x] == ' ')
					return (501);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	map_rgb_error(t_map *map)
{
	if (map->floor->check == -1)
		return (900);
	if (map->ceiling->check == -1)
		return (900);
	return (0);
}
