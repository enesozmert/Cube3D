#include "../../include/header.h"

void init_ceiling(t_map *map)
{
	map->ceiling->hex_color = 0;
	map->ceiling->rgb = NULL;
	map->ceiling->check = -1;
}