#include "../../include/header.h"

int draw_pixel_height(t_game *game)
{
    int line_height = game->draw.line_height;
    int start = -line_height / 2 + game->screen.height / 2;
    if (start < 0)
        start = 0;
    int end = line_height / 2 + game->screen.height / 2;
    if (end >= game->screen.height)
        end = game->screen.height - 1;
    game->draw.start = start;
    game->draw.end = end;
    return (0);
}