#include "../../include/header.h"

int event_key_down(int key_code, t_game *game)
{
    if (key_code == 53)
        event_close(game);
    if (key_code == 123)
    {
        while (game->player.rotate_speed > 0)
        {
            game->player.rotate_speed -= 0.01;
            game->player.rotate = game->player.rotate_speed;
            player_rotate(game);
        }
        game->player.rotate_speed = 0.5;
    }
    if (key_code == 124)
    {
        while (game->player.rotate_speed > 0)
        {
            game->player.rotate_speed -= 0.01;
            game->player.rotate = -game->player.rotate_speed;
            player_rotate(game);
        }
        game->player.rotate_speed = 0.5;
    }
    return (0);
}