#include "../../include/header.h"

int event_key_down(int key_code, t_game *game)
{
    key_close(key_code, game);
    key_player_jump(key_code, game);
    if (key_code == MACOS_A)
        game->key.is_a = 1;
    if (key_code == MACOS_D)
        game->key.is_d = 1;
    if (key_code == MACOS_W)
        game->key.is_w = 1;
    if (key_code == MACOS_S)
        game->key.is_s = 1;
    if (key_code == MACOS_LEFT)
        game->key.is_left = 1;
    if (key_code == MACOS_RIGHT)
        game->key.is_right = 1;
    return (0);
}