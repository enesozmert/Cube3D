#include "../../include/header.h"

int format_textture_dir(char *texture_dir, t_map *map)
{
    int i;
    int flag;
    char *dir;
    char *path;
    char **get_possible_texture_dir;

    i = -1;
    flag = 0;
    dir = ft_substr(texture_dir, 0 , 2);
    get_possible_texture_dir = ft_split(map->possible_texture_dir, ',');
    while (get_possible_texture_dir[++i])
    {
        if (ft_strncmp(dir, get_possible_texture_dir[i], ft_strlen(dir)) == 0)
            flag = 1;
    }
    path = ft_substr(texture_dir, 3, ft_strlen(texture_dir));
    if (!flag || texture_dir[2] != ' ' || !is_valid_path(path))
        return (0);
    return (1);
}