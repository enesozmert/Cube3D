#include "../../include/header.h"

int parser_map_textture_dir(int index, char *texture_dir, t_map map)
{
    char *dir;
    char *texture_path;

    dir = ft_substr(texture_dir, 0 , 2);
    texture_path = ft_substr(texture_dir, 3, ft_strlen(texture_dir));
    map.texture_dirs[index].dir = ft_strdup(dir);
    map.texture_dirs[index].texture_path = ft_strdup(texture_path);
    map.texture_dirs[index].index = index;
    free(dir);
    free(texture_path);
    return (0);
}