#include "../../include/header.h"

int ray_wall_height(t_game *game)
{
    int line_height;
    
    line_height = (int)(game->screen.height / game->ray.perp_wall_dist);
    game->draw.line_height = line_height;
    return (0);
}