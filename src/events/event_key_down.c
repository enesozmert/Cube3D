#include "../../include/header.h"

int event_key_down(int key_code, t_game *game)
{
    key_close(key_code, game);
    key_player_rotate(key_code, game);
    key_player_move(key_code, game);
    return (0);
}