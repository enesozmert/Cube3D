#include "../../include/header.h"

int raycasting(t_game *game)
{
    int x;

    x = -1;
    while (++x < game->screen.width)
    {
        game->camera.x = 2 * x / (double)game->screen.width - 1;
        double rayDirX = game->player.dir_x + game->camera.plane_x * game->camera.x;
        double rayDirY = game->player.dir_y + game->camera.plane_y * game->camera.y;
    }
    
}