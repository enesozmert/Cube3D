#include "../../include/header.h"

int draw_screen(t_game *game)
{
    int	screen_w;
	int	screen_h;

	screen_w = game->screen.width;
	screen_h = game->screen.height;
    game->wlx.mlx = mlx_init();
	game->wlx.win = mlx_new_window(game->wlx.mlx, screen_w, screen_h, "Ecole 42 eozmert iyapar");
    return (0);
}