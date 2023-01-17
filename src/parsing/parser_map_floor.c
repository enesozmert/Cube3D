#include "../../include/header.h"

int parser_map_floor(char *floor, t_map map)
{
    int i;
    char *str_rgb;
    int *get_int_rgb;

    i = -1;
    str_rgb = ft_substr(floor, 2, ft_strlen(floor));
    get_int_rgb = int_rgb(str_rgb);
    while (++i < 3)
        map.floor->rgb[i] = get_int_rgb[i];
    map.floor->hex_color = rgb_hex(map.floor->rgb[0], map.floor->rgb[1], map.floor->rgb[2]);
    free(get_int_rgb);
    free(str_rgb);
    return (0);
}