#include "../../include/header.h"

void player(t_game *game)
{
    get_player_position(game);
    get_player_dir(game);
    player_select_rotate(game);
    player_rotate(game);
    game->map.matris[(int)game->player.pos_y][(int)game->player.pos_x] = '0';
}