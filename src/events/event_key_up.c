#include "../../include/header.h"

int event_key_up(int key_code, t_game *game)
{
    if (key_code == MACOS_SPACE)
         game->player.jump_size = 0;
    if (key_code == MACOS_A)
        game->key.is_a = 0;
    if (key_code == MACOS_D)
        game->key.is_d = 0;
    if (key_code == MACOS_W)
        game->key.is_w = 0;
    if (key_code == MACOS_S)
        game->key.is_s = 0;
    if (key_code == MACOS_LEFT)
        game->key.is_left = 0;
    if (key_code == MACOS_RIGHT)
        game->key.is_right = 0;
    return (0);
}