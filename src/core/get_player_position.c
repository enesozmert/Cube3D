#include "../../include/header.h"

t_position *get_player_position(t_map *map)
{
    int x;
    int y;
    t_position *position;

    x = -1;
    y = -1;
    position = malloc(sizeof(t_position) * 1);
    while (map->matris[++y])
    {
        x = -1;
        while (map->matris[++x])
        {
            if (ft_strchr(map->possible_single_items, map->matris[y][x]))
            {
                position[0].x = x;
                position[0].y = y;
                break ;
            }
        }
    }
    return (position);
}