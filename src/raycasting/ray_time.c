#include "../../include/header.h"

int ray_time(t_game *game)
{
    time_t seconds;

    game->frame.time = time(&seconds);
    game->frame.frame_time = (game->frame.time - game->frame.old_time);
    if (game->frame.frame_time < 0)
        game->frame.frame_time = 0;
    return (0);
}