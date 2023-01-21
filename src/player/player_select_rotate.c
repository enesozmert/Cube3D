#include "../../include/header.h"

int player_select_rotate(t_game *game)
{
    if (game->player.dir == 'S')
        game->player.rotate = M_PI;
    else if (game->player.dir == 'W')
        game->player.rotate = 1.5 * M_PI;
    else if (game->player.dir == 'E')
        game->player.rotate = 0.5 * M_PI;
    else if (game->player.dir == 'N')
        game->player.rotate = 0;
    return (0);
}