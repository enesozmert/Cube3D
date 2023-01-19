#include "../../include/header.h"

int ray_update(t_game *game)
{
    int x;
    int step_x;
    int step_y;
    int side;
    t_position *player_position;

    x = -1;
    step_x = 0;
    step_y = 0;
    side = 0;
    player_position = get_player_position(&game->map);
    game->player.pos_x = player_position->x + 0.5;
    game->player.pos_y = player_position->y + 0.5;
    while (++x < game->screen.width)
    {
        game->ray.per_pixel_x = x;
        ray(game);
        ray_steps(game, &step_x, &step_y);
        ray_hit(game, &step_x, &step_y, &side);
        ray_fisheye_fixed(game, &side);
    }
    return (0);
}