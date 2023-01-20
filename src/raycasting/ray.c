#include "../../include/header.h"

int ray(t_game *game)
{
    game->camera.x = 2 * game->ray.per_pixel_x / (double)game->screen.width - 1;
    game->ray.dir_x = game->player.dir_x + game->camera.plane_x * game->camera.x;
    game->ray.dir_y = game->player.dir_y + game->camera.plane_y * game->camera.x;
    game->ray.map_x = (int)game->player.pos_x;
    game->ray.map_y = (int)game->player.pos_y;
    game->ray.delta_dist_x = (game->ray.dir_x == 0) ? 1 : fabs(1 / game->ray.dir_x);
    game->ray.delta_dist_y = (game->ray.dir_y == 0) ? 1 : fabs(1 / game->ray.dir_y);
    return (0);
}