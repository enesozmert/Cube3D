#include "../../include/header.h"

int draw_texture_calculate(t_game *game)
{
    game->draw.tex_x = (int)(game->select_texture->tex_w - (int)(game->draw.wall_x * game->select_texture->tex_w));
    game->draw.step = 1.0 * (double)game->select_texture->tex_h / (double)game->draw.line_height;
    game->draw.tex_pos = (double)(game->draw.start - game->screen.height / 2 + game->draw.line_height / 2) * game->draw.step;
    return (0);
}