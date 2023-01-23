#include "../../include/header.h"

int event_key_up(int key_code, t_game *game)
{
    if (key_code == MACOS_SPACE)
         game->player.jump_size = 0;
    return (0);
}