#include "../../include/header.h"

int read_map(char *path, t_map *map)
{
	if (is_valid_path(path) == 0)
		exit(printf("Error: path invalid : %s\n", path));
	if ((map->fd = open(path, O_RDONLY)) == -1)
		exit(printf("Error : incorrect file, failed to open it %s\n", path));
	map->path = ft_strdup(path);
	map->filename = get_filename_without_extension(path);
	map->extension = get_file_extension(path);
	map->matris = (char **)malloc(sizeof(char *) * get_map_height(map->path) + 1);
	return (0);
}