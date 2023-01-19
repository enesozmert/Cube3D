#include "../../include/header.h"

void init_player(t_player *player)
{
    player->pos_x = 0;
    player->pos_y = 0;
    player->dir_x = -1;
    player->dir_y = 0;
}