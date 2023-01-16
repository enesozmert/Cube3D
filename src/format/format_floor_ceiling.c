#include "../../include/header.h"

int format_floor_ceiling(char *floor_ceiling, t_map *map)
{
    (void)map;
    int i;

    if (floor_ceiling[0] != 'F' || floor_ceiling[0] != 'C')
        return (0);
    i = 0;
    while (i < (int)ft_strlen(floor_ceiling))
        ++i;
    return (1);
}