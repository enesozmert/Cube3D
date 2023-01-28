/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:54:58 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:16:45 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	item_wrong_error(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->matris[y])
	{
		x = 0;
		while (map->matris[y][x])
		{
			if (!ft_strchr(map->possible_items, map->matris[y][x]))
				return (203);
			x++;
		}
		y++;
	}
	return (0);
}

int	item_single_error(t_map *map)
{
	int		i;
	int		result;
	char	**get_posible_single_items;

	i = -1;
	result = 0;
	get_posible_single_items = ft_split(map->possible_single_items, ',');
	while (++i < 4)
		result += get_block_count(map, get_posible_single_items[i][0]);
	free_double_str(get_posible_single_items);
	if (result != 1)
		return (204);
	return (0);
}
