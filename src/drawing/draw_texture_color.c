#include "../../include/header.h"

unsigned long draw_texture_color(t_game *game, int *side)
{
    if (*side == 1)
    {
        if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0) || (game->ray.dir_x >= 0 && game->ray.dir_y <= 0))
            return (rgb_hex(255,0,0));
        else
            return (rgb_hex(255,255,0));
    }
    else
    {
        if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0) || (game->ray.dir_x <= 0 && game->ray.dir_y >= 0))
            return (rgb_hex(187,227,34));
        else
            return (rgb_hex(54,0,171));
    }
    return (0);
}