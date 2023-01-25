#include "../../include/header.h"

int format_ceiling(char *ceiling, t_map *map)
{
    (void)map;
	char *rgb;

    if (ceiling[0] != 'C' || ceiling[1] != ' ')
        return (0);
	rgb = ft_substr(ceiling, 2, ft_strlen(ceiling));
	if (!is_valid_rgb(rgb))
    {
        free(rgb);
		return (0);
    }
    free(rgb);
    return (1);
}