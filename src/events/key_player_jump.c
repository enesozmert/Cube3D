#include "../../include/header.h"

int key_player_jump(t_game *game)
{
    if (game->key.is_space)
        game->player.jump_size = 10;
    return (0);
}