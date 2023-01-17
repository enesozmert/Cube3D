#include "../../include/header.h"

int parser_map_ceiling(char *ceiling, t_map *map)
{
    int i;
    char *str_rgb;
    int *get_int_rgb;

    i = -1;
    str_rgb = ft_substr(ceiling, 2, ft_strlen(ceiling));
    get_int_rgb = int_rgb(str_rgb);
    while (++i < 3)
        map->ceiling->rgb[i] = get_int_rgb[i];
    map->ceiling->hex_color = rgb_hex(map->ceiling->rgb[0], map->ceiling->rgb[1], map->ceiling->rgb[2]);
    free(get_int_rgb);
    free(str_rgb);
    return (0);
}