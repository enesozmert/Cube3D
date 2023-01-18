#include "../../include/header.h"

int load_screen(t_game *game)
{
    int	screen_w;
	int	screen_h;

	screen_w = game->screen.height;
	screen_h = game->screen.width;
    game->wlx.mlx = mlx_init();
	game->wlx.win = mlx_new_window(game->wlx.mlx, screen_w, screen_h, "Ecole 42 eozmert iyapar");
    return (0);
}