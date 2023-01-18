#include "../../include/header.h"

int map_error(t_map map)
{
	int x;
	int y;
	int height;
	int width;

	x = 0;
	y = -1;
	width = 0;
	height = 0;
	while (map.matris[++y])
		height++;
	y = 0;
	height--;
	while (map.matris[y])
	{
		x = 0;
		width = (int)ft_strlen(map.matris[y]) - 1;
		while (map.matris[y][x])
		{
			if (map.matris[0][x] != '1' && y == 0)
				return (404);
			if (map.matris[y][0] != '1' && x == 0)
				return (403);
			if (map.matris[y][width] != '1' && x == width)
				return (402);
			if (map.matris[height][x] != '1' && y == height)
				return (401);
			x++;
		}
		y++;
	}
	return (0);
}

int item_repeat_error(t_map map)
{
	(void)map;
	// char	*singular_items;
	// char	**get_posible_items;
	// int		i;
	// int     j;

	// i = -1;
	// j = -1;
	// get_posible_items = ft_split(map.possible_items, ",");
	// while (singular_items[++i])
	// {
	//     while (get_posible_items[++j])
	//     {
	//         if (get_block_count(&map, get_posible_items[j]) < 1)
	// 		    return (202);
	//     }
	// }
	return (0);
}

int item_single_error(t_map map)
{
	// (void)map;
	int i;
	char	**get_posible_single_items;

	i = -1;
	get_posible_single_items = ft_split(map.possible_single_items, ',');
	while (get_posible_single_items[++i])
	{
		if (get_block_count(&map, get_posible_single_items[i][0]) != 1)
			return (204);
	}
	return (0);
}

int item_wrong_error(t_map map)
{
	(void)map;
	// int	i;
	// int	j;

	// j = 0;
	// i = 0;
	// while (map.matris[i])
	// {
	// 	j = 0;
	// 	while (map.matris[i][j])
	// 	{
	// 		if (!ft_strchr("1PCE0X\n", map.matris[i][j]))
	// 			return (102);
	// 		j++;
	// 	}
	// 	i++;
	// }
	return (0);
}

int file_error(t_map map)
{
	char *str;

	if (map.fd < 0)
		return (504);
	str = ft_strchr(map.path, '.');
	if (ft_strnstr(&str[0], map.extension, ft_strlen(map.path)) == NULL)
		return (502);
	return (0);
}