#include "../../include/header.h"

int map_error(t_map map)
{
	int x;
	int y;
	int height;
	int width;

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

int header_count_error(t_map map)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (map.texture_dirs_count > 4)
			return (102);
	}
	if (map.floor_count > 1 || map.ceiling_count > 1)
		return (102);
	return (0);
}

int header_location_error(t_map map)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (map.texture_dirs[i].fd_start_index > 5)
			return (103);
	}
	if (map.floor->fd_start_index > 5 || map.ceiling->fd_start_index > 5)
		return (103);
	return (0);
}

int item_single_error(t_map map)
{
	int		i;
	int		result;
	char	**get_posible_single_items;

	i = -1;
	result = 0;
	get_posible_single_items = ft_split(map.possible_single_items, ',');
	while (get_posible_single_items[++i])
		result += get_block_count(&map, get_posible_single_items[i][0]);
	if (result < 1 || result > 1)
		return (204);
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