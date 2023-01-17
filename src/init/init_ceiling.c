#include "../../include/header.h"

void init_ceiling(t_map *map)
{
	map->ceiling->fd_start_index = -1;
	map->ceiling->hex_color = 0;
	map->ceiling->rgb = malloc(sizeof(int) * 3);
	map->ceiling->check = -1;
}