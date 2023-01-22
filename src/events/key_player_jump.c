#include "../../include/header.h"

int key_player_jump(int key_code, t_game *game)
{
    int i;

    i = -1;
    if (key_code == MACOS_SPACE)
        game->player.jump_size = 10;
    else
    {
         game->player.jump_size = 0;
    }
    return (0);
}