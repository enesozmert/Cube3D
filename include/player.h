#ifndef PLAYER_H
#define PLAYER_H

#include "game.h"
#include "position.h"

typedef struct s_player
{
    double	pos_x;
    double	pos_y;
    double	dir_x;
    double	dir_y;
    double  rotate;
    double  rotate_speed;
	char	dir;
    double  move_speed;
    double  jump_size;
}   t_player;

#endif