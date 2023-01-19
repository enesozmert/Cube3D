#include "../../include/header.h"

int ray_hit(t_game *game, int *step_x, int *step_y, int *side)
{
    while (game->ray.hit == 0)
    {
        // jump to next map square, either in x-direction, or in y-direction
        if (game->ray.side_dist_x < game->ray.side_dist_y)
        {
            game->ray.side_dist_x += game->ray.delta_dist_x;
            game->ray.map_x += *step_x;
            *side = 0;
        }
        else
        {
            game->ray.side_dist_y += game->ray.delta_dist_y;
            game->ray.map_y += *step_y;
            *side = 1;
        }
        // Check if ray has hit a wall
        // printf("game->ray.map_x : %d , game->ray.map_y : %d\n", game->ray.map_x, game->ray.map_y);
        if (game->map.matris[game->ray.map_y][game->ray.map_x] == '1')
            game->ray.hit = 1;
    }
    return (0);
}