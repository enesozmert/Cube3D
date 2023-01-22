#include "../../include/header.h"

int key_player_rotate(int key_code, t_game *game)
{
    if (key_code == MACOS_RIGHT)
    {
        while (game->player.rotate_speed > 0)
        {
            game->player.rotate_speed -= M_PI * 0.8;
            game->player.rotate = game->player.rotate_speed * game->frame.frame_time;
            player_rotate(game);
        }
        game->player.rotate_speed = 8.0;
    }
    if (key_code == MACOS_LEFT)
    {
        while (game->player.rotate_speed > 0)
        {

            game->player.rotate_speed -= M_PI * 0.8;
            game->player.rotate = -game->player.rotate_speed * game->frame.frame_time;
            player_rotate(game);
        }
        game->player.rotate_speed = 8.0;
    }
    return (0);
}