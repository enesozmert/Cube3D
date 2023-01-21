#include "../../include/header.h"

void init_all(t_game *game)
{
    init_map(&game->map);
    init_player(&game->player);
    init_camera(&game->camera);
    init_frame(&game->frame);
    init_screen(&game->screen);
    init_ray(&game->ray);
    init_draw(&game->draw);
}