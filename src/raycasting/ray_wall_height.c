#include "../../include/header.h"

int ray_wall_height(t_game *game)
{
    game->draw.line_height = (int)(game->screen.height / game->ray.perp_wall_dist);
    // printf("line_height %d , game->ray.perp_wall_dist %f \n",line_height, game->ray.perp_wall_dist);
    return (0);
}