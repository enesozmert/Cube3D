#include "../../include/header.h"

int key_close(int key_code, t_game *game)
{
    if (key_code == 53)
        event_close(game);
    return (0);
}