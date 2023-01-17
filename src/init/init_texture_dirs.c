#include "../../include/header.h"

void init_texture_dirs(t_map *map)
{
    int i;

    i = -1;
    while (++i < 4)
    {
        map->texture_dirs[i].fd_start_index = -1;
	    map->texture_dirs[i].check = -1;
	    map->texture_dirs[i].index = -1;
	    map->texture_dirs[i].dir = NULL;
	    map->texture_dirs[i].texture_path = NULL;
    }
}