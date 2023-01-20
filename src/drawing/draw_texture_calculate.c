#include "../../include/header.h"

int draw_texture_calculate(t_game *game)
{
    game->draw.tex_x = 64 - (int)(game->draw.wall_x * 64);
    printf("wallx : %d\n", (int)game->draw.wall_x);
    game->draw.step = (double)64 / game->draw.line_height;
    game->draw.tex_pos = (game->draw.start - SCREEN_HEIGHT / 2 + game->draw.line_height / 2) * game->draw.step;
    return (0);
}