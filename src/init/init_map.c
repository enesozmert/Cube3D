#include "../../include/header.h"

void init_map(t_map *map)
{
	map->floor = malloc(sizeof(t_floor) * 1);
	init_floor(map);
	map->ceiling = malloc(sizeof(t_ceiling) * 1);
	init_ceiling(map);
	map->texture_dirs = malloc(sizeof(t_texture_dir) * 4);
	init_texture_dirs(map);
	map->fd = -1;
	map->fd_start_index = -1;
	map->path = NULL;
	map->filename = NULL;
	map->extension = NULL;
	map->matris = NULL;
	map->possible_items = "0,1,E,N,S,W, ";
	map->possible_texture_dir = ft_strdup("NO,SO,WE,EA");
	map->area = 0;
	map->max_x = 0;
	map->max_y = 0;
	map->max_line_size = 0;
	map->min_line_size = 0;
	map->check = -1;
}
