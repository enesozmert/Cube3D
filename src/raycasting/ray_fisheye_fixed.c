#include "../../include/header.h"

int ray_fisheye_fixed(t_game *game)
{
    if (game->ray.side == 0)
        game->ray.perp_wall_dist = (game->ray.side_dist_x - game->ray.delta_dist_x);
    else
        game->ray.perp_wall_dist = (game->ray.side_dist_y - game->ray.delta_dist_y);
    return(0);
}
