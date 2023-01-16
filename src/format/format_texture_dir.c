#include "../../include/header.h"

int format_textture_dir(char *texture_dir, t_map *map)
{
    int i;
    char *dir;
    char **get_possible_texture_dir;

    i = -1;
    dir = ft_substr(texture_dir, 0, 2);
    get_possible_texture_dir = ft_split(map->possible_texture_dir, ',');
    while (get_possible_texture_dir[++i])
    {
        if (ft_strncmp(dir, get_possible_texture_dir[i],
            ft_strlen(get_possible_texture_dir[i])) != 0)
            return (0);
    }
    if (texture_dir[3] != ' ')
        return (0);
    i = 2;
    while (texture_dir[i] <= 32)
        ++i;
    if (!is_valid_filename(&texture_dir[i]))
        return (0);
    return (1);
}