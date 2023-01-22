#include "../../include/header.h"

void init_player(t_player *player)
{
    player->pos_x = 0;
    player->pos_y = 0;
    player->dir_x = 0;
    player->dir_y = 1.0;
    player->rotate = 0;
    player->dir = 0;
    player->rotate_speed = 8.0;
    player->move_speed = 20.0;
    player->jump_size = 0;
}