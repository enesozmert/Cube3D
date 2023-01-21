#include "../../include/header.h"

int draw_pixel_height(t_game *game)
{
    game->draw.start = (-1 * game->draw.line_height / 2) + (game->screen.height / 2);
    if (game->draw.start < 0)
        game->draw.start = 0;
    game->draw.end = (game->draw.line_height / 2) + (game->screen.height / 2);
    if (game->draw.end >= game->screen.height)
        game->draw.end = game->screen.height - 1;
    // printf("game->draw.line_height %d start %d end %d\n", game->draw.line_height, game->draw.start, game->draw.end);
    return (0);
}