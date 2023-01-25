#include "../../include/header.h"

int event_key_down(int key_code, t_game *game)
{
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
    if (key_code == MACOS_ESC)
        game->key.is_esc = 1;
    if (key_code == MACOS_SPACE)
        game->key.is_space = 1;
    return (0);
}