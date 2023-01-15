#include "../../include/header.h"

void init_floor(t_map *map)
{
	map->floor->hex_color = 0;
	map->floor->rgb = NULL;
	map->floor->check = -1;
}