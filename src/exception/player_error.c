/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:58:34 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/27 12:31:49 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	player_error(t_map map)
{
	int	x;
	int	y;
	int	height;
	int	width;

	x = 0;
	y = 0;
	width = 0;
	height = get_map_height(map.path) - 7;
	while (map.matris[y])
	{
		x = 0;
		width = (int)ft_strlen(map.matris[y]) - 1;
		while (map.matris[y][x])
		{
			if (ft_strchr(map.possible_single_items, \
			map.matris[0][x]) && y == 0)
				return (604);
			if (ft_strchr(map.possible_single_items, \
			map.matris[y][0]) && x == 0)
				return (603);
			if (ft_strchr(map.possible_single_items, \
			map.matris[y][width]) && x == width)
				return (602);
			if (ft_strchr(map.possible_single_items, \
			map.matris[height][x]) && y == height)
				return (601);
			x++;
		}
		y++;
	}
	return (0);
}
