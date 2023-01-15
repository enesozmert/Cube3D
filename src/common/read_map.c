#include "../../include/header.h"

int read_map(char *path, t_map *map)
{
	if ((map->fd = open(path, O_RDONLY)) == -1)
		printf("Arguments : incorrect file, failed to open it %s\n", map->path);
	map->path = ft_strdup(path);
	map->filename = get_filename_without_extension(path);
	map->extension = get_file_extension(path);
	
	return (0);
}