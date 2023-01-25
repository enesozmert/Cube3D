#include "../../include/header.h"

int key_close(t_game *game)
{
    if (game->key.is_esc)
        event_close(game);
    return (0);
}