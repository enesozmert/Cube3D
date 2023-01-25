#include "../../include/header.h"

int format_floor(char *floor, t_map *map)
{
    (void)map;
	char *rgb;

    if (floor[0] != 'F' || floor[1] != ' ')
        return (0);
	rgb = ft_substr(floor, 2, ft_strlen(floor));
	if (!is_valid_rgb(rgb))
    {
        free(rgb);
		return (0);
    }
    free(rgb);
    return (1);
}