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
			if (map.matris[0][x] != '1' && map.matris[0][x] != ' ' && y == 0)
				return (404);
			if (map.matris[y][0] != '1' && map.matris[y][0] != ' ' && x == 0)
				return (403);
			if (map.matris[y][width] != '1' && map.matris[y][width] != ' ' && x == width)
				return (402);
			if (map.matris[height][x] != '1' && map.matris[height][x] != ' ' && y == height)
				return (401);
			x++;
		}
		y++;
	}
	return (0);
}

int map_error_space(t_map map)
{
	int x;
	int y;

	y = -1;
	while (map.matris[++y])
	{
		x = 0;
		while (map.matris[y][x])
		{
			if (map.matris[y][x] == '0')
			{
				if (map.matris[y + 1][x] == ' ' || map.matris[y + 1][x] == '\0')
					return (504);
				if (map.matris[y][x + 1] == ' ' || map.matris[y][x + 1] == '\0')
					return (503);
				if (map.matris[y][x - 1] == ' ' || map.matris[y][x - 1] == '\0')
					return (502);
				if (map.matris[y - 1][x] == ' ' || map.matris[y - 1][x] == '\0')
					return (501);
			}
			x++;	
		}
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