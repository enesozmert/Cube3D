#include "../../include/header.h"

int key_player_move(t_game *game)
{
    if (game->key.is_a)
        player_move_ad(game, -1, 1);
    if (game->key.is_d)
        player_move_ad(game, 1, -1);
    if (game->key.is_w)
        player_move_ws(game, 1, 1);
    if (game->key.is_s)
        player_move_ws(game, -1, -1);
    return (0);
}