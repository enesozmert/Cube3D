#include "../../include/header.h"

int event_close(t_game *game)
{
    printf("ok\n");
    mlx_clear_window(game->wlx.mlx, game->wlx.win);
    mlx_destroy_window(game->wlx.mlx, game->wlx.win);
    exit(0);
}