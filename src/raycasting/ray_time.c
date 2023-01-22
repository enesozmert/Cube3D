#include "../../include/header.h"

int ray_time(t_game *game)
{
    clock_gettime(CLOCK_MONOTONIC, &game->frame.time);
    game->frame.frame_time = (game->frame.time.tv_sec - game->frame.old_time.tv_sec) + (game->frame.time.tv_nsec - game->frame.old_time.tv_nsec) / 1e9;
    if (game->frame.frame_time == 0)
        game->frame.frame_time = 1e9;
    return (0);
}