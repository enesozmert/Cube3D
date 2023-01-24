#include "../../include/header.h"

int key_player_rotate(t_game *game)
{
    if (game->key.is_right)
    {
        while (game->player.rotate_speed > 0)
        {
            game->player.rotate_speed -= M_PI * 0.8;
            game->player.rotate = -game->player.rotate_speed * game->frame.frame_time;
            player_rotate(game);
        }
        game->player.rotate_speed = 3.0;
    }
    if (game->key.is_left)
    {
        while (game->player.rotate_speed > 0)
        {
            game->player.rotate_speed -= M_PI * 0.8;
            game->player.rotate = game->player.rotate_speed * game->frame.frame_time;
            player_rotate(game);
        }
        game->player.rotate_speed = 3.0;
    }
    return (0);
}