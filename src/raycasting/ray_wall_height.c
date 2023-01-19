#include "../../include/header.h"

int ray_wall_height(t_game *game)
{
    (int)(game->screen.height / game->ray.perp_wall_dist);
}