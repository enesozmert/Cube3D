#include "../../include/header.h"

int key_player_move(int key_code, t_game *game)
{
    if (key_code == MACOS_A)
        player_move_ad(game, -1, 1);
    if (key_code == MACOS_D)
        player_move_ad(game, 1, -1);
    if (key_code == MACOS_W)
        player_move_ws(game, 1, 1);
    if (key_code == MACOS_S)
        player_move_ws(game, -1, -1);
    return (0);
}