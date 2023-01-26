/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:54:58 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:55:16 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	item_wrong_error(t_map map)
{
	int	x;
	int	y;

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
	y = 0;
	while (map.matris[y])
	{
		x = 0;
		while (map.matris[y][x])
		{
			if (!ft_strchr(map.possible_items, map.matris[y][x]))
				return (203);
			x++;
		}
		y++;
	}
<<<<<<< HEAD
=======
=======
    y = 0;
    while (map.matris[y])
    {
        x = 0;
        while (map.matris[y][x])
        {
            if (!ft_strchr(map.possible_items, map.matris[y][x]))
                return (203);
            x++;
        }
        y++;
    }
>>>>>>> 875c2fed454e357818e7313581ee2e11251d1b86
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
	return (0);
}

int	item_single_error(t_map map)
{
	int		i;
	int		result;
	char	**get_posible_single_items;

	i = -1;
	result = 0;
	get_posible_single_items = ft_split(map.possible_single_items, ',');
	while (++i < 4)
		result += get_block_count(&map, get_posible_single_items[i][0]);
	free_double_str(get_posible_single_items);
	if (result != 1)
		return (204);
	return (0);
}
