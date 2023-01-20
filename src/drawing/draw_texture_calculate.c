#include "../../include/header.h"

int draw_texture_calculate(t_game *game)
{
    game->draw.tex_x = game->draw.tex_w - (int)(game->draw.wall_x * game->draw.tex_w);
    game->draw.step = (double)game->draw.tex_h / game->draw.line_height;
    game->draw.tex_pos = (game->draw.start - SCREEN_HEIGHT / 2 + game->draw.line_height / 2) * game->draw.step;
    return (0);
}